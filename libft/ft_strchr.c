/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradaide <aradaide@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 11:55:11 by aradaide          #+#    #+#             */
/*   Updated: 2026/09/30 19:11:11 by aradaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	target;
	int		index;

	target = (char)c;
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == target)
			return ((char *)&s[index]);
		index++;
	}
	if (target == '\0')
		return ((char *)&s[index]);
	return (NULL);
}
