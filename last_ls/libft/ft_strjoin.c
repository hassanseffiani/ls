/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 06:11:02 by hseffian          #+#    #+#             */
/*   Updated: 2019/11/04 17:49:14 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*one_return(char const *s1, char const *s2)
{
	if (s1)
		return (ft_strdup(s1));
	if (s2)
		return (ft_strdup(s2));
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*a;

	i = 0;
	j = 0;
	if (s1 && s2)
	{
		if ((a = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		{
			while (s1[i])
			{
				a[i] = s1[i];
				i++;
			}
			while (s2[j])
			{
				a[i] = s2[j];
				i++;
				j++;
			}
			return (a);
		}
	}
	return (one_return(s1, s2));
}
