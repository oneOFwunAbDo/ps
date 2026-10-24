/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradaide <aradaide@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:48:40 by aradaide          #+#    #+#             */
/*   Updated: 2026/09/13 16:59:09 by aradaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	string_length;
	size_t	substring_length;

	if (s == NULL)
		return (NULL);
	string_length = ft_strlen(s);
	if (start >= string_length)
	{
		substring = (char *)malloc(1);
		if (substring == NULL)
			return (NULL);
		substring[0] = '\0';
		return (substring);
	}
	substring_length = string_length - start;
	if (substring_length > len)
		substring_length = len;
	substring = (char *)malloc(substring_length + 1);
	if (substring == NULL)
		return (NULL);
	ft_strlcpy(substring, s + start, substring_length + 1);
	substring[substring_length] = '\0';
	return (substring);
}
