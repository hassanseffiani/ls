/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 06:15:25 by hseffian          #+#    #+#             */
/*   Updated: 2019/04/21 22:14:21 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	char		*a;
	char		*b;

	i = 0;
	a = (char *)haystack;
	b = (char *)needle;
	if (b[i] == '\0')
		return (a);
	while (a[i] && i < len)
	{
		j = 0;
		while (a[i + j] == b[j] && (i + j) < len)
		{
			j++;
			if (b[j] == '\0')
				return (a + i);
		}
		i++;
	}
	return (NULL);
}
