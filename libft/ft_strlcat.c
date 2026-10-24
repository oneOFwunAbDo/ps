/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradaide <aradaide@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 09:49:30 by aradaide          #+#    #+#             */
/*   Updated: 2026/09/23 17:25:29 by aradaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destination_len;
	size_t	source_len;
	size_t	index;

	destination_len = 0;
	source_len = ft_strlen(src);
	while (destination_len < size && dest[destination_len] != '\0')
		destination_len++;
	if (destination_len == size)
		return (size + source_len);
	index = 0;
	while (src[index] != '\0' && destination_len + index + 1 < size)
	{
		dest[destination_len + index] = src[index];
		index++;
	}
	dest[destination_len + index] = '\0';
	return (destination_len + source_len);
}
