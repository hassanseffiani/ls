/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 01:01:03 by hseffian          #+#    #+#             */
/*   Updated: 2019/04/22 01:52:33 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*a;
	unsigned int	i;

	i = 0;
	if (s)
	{
		if ((a = ft_strnew(ft_strlen(s))))
		{
			while (s[i])
			{
				a[i] = f(i, s[i]);
				i++;
			}
			return (a);
		}
	}
	return (0);
}
