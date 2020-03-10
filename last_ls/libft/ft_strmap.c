/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 06:17:22 by hseffian          #+#    #+#             */
/*   Updated: 2019/04/18 23:45:28 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*a;
	int		i;

	i = 0;
	if (s)
	{
		if ((a = ft_strnew(ft_strlen(s))))
		{
			while (s[i])
			{
				a[i] = f(s[i]);
				i++;
			}
			return (a);
		}
	}
	return (0);
}
