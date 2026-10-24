/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradaide <aradaide@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 20:14:16 by aradaide          #+#    #+#             */
/*   Updated: 2026/09/17 17:22:05 by aradaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	size_t			length;
	char			*string;

	if (!s || !f)
		return (NULL);
	length = 0;
	while (s[length])
		length++;
	string = (char *)malloc(sizeof(char) * (length + 1));
	if (!string)
		return (NULL);
	index = 0;
	while (index < length)
	{
		string[index] = f(index, s[index]);
		index++;
	}
	string[index] = '\0';
	return (string);
}
