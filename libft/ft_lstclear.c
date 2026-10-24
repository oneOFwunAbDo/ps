/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradaide <aradaide@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:59:52 by aradaide          #+#    #+#             */
/*   Updated: 2026/09/19 19:02:48 by aradaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temporary;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temporary = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temporary;
	}
	*lst = NULL;
}
