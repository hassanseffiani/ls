/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 04:04:03 by hseffian          #+#    #+#             */
/*   Updated: 2019/04/21 22:14:08 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*a;
	char	*b;

	i = 0;
	a = (char *)haystack;
	b = (char *)needle;
	if (b[i] == '\0')
		return (a);
	while (a[i])
	{
		j = 0;
		while (a[i + j] == b[j])
		{
			j++;
			if (b[j] == '\0')
				return (a + i);
		}
		i++;
	}
	return (0);
}
