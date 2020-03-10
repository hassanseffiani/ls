/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 23:05:01 by hseffian          #+#    #+#             */
/*   Updated: 2019/04/18 15:47:51 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;

	i = 0;
	if (s)
	{
		if ((a = ft_strnew(len)))
		{
			while (s[i + (size_t)start] && i < len)
			{
				a[i] = s[i + (size_t)start];
				i++;
			}
			return (a);
		}
	}
	return (NULL);
}
