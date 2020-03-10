/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 02:41:10 by hseffian          #+#    #+#             */
/*   Updated: 2019/04/21 22:13:39 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*a;

	i = ft_strlen(s);
	a = (char *)s;
	while (i >= 0)
	{
		if (a[i] == (char)c)
			return (&a[i]);
		i--;
	}
	return (0);
}
