/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 00:41:16 by hseffian          #+#    #+#             */
/*   Updated: 2019/04/21 22:13:14 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t d;
	size_t s;
	size_t i;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	i = 0;
	if (d >= size)
		s = s + size;
	else
		s = s + d;
	while (src[i] && d + 1 < size)
	{
		dst[d] = src[i];
		i++;
		d++;
	}
	dst[d] = '\0';
	return (s);
}
