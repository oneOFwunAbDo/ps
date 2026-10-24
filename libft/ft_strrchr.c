/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradaide <aradaide@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 12:00:29 by aradaide          #+#    #+#             */
/*   Updated: 2026/09/30 20:20:01 by aradaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	mytarget;

	index = ft_strlen(s);
	mytarget = (char)c;
	while (index >= 0)
	{
		if (s[index] == mytarget)
			return ((char *)(s + index));
		index--;
	}
	return (NULL);
}
