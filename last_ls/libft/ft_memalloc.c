/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 03:14:59 by hseffian          #+#    #+#             */
/*   Updated: 2019/04/18 14:15:30 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*a;

	i = 0;
	if (!(a = (char *)malloc(size * sizeof(char))))
		return (NULL);
	while (i < size)
		a[i++] = '\0';
	return (a);
}
