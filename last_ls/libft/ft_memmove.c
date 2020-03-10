/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 06:36:46 by hseffian          #+#    #+#             */
/*   Updated: 2019/04/21 22:35:17 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp;

	if ((temp = (char *)malloc(sizeof(char) * len)))
	{
		temp = ft_memcpy(temp, src, len);
		dst = ft_memcpy(dst, temp, len);
		free(temp);
	}
	return (dst);
}
