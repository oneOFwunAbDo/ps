/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradaide <aradaide@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 19:53:58 by aradaide          #+#    #+#             */
/*   Updated: 2026/09/27 21:10:17 by aradaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointer;
	unsigned char	value;

	pointer = (unsigned char *)s;
	value = (unsigned char)c;
	while (n--)
	{
		*pointer = value;
		pointer++;
	}
	return (s);
}
