/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 04:49:09 by hseffian          #+#    #+#             */
/*   Updated: 2019/04/19 02:33:34 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*a;

	i = 0;
	if (!(a = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	while (i < size + 1)
		a[i++] = '\0';
	return (a);
}
