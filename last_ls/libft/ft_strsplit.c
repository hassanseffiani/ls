/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 02:01:12 by hseffian          #+#    #+#             */
/*   Updated: 2019/04/21 22:26:36 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char	**a;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (!s || !(a = (char **)malloc(sizeof(char*) * (ft_count_word(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			k = 0;
			if (!(a[j] = ft_strnew(ft_count_lettre(s, c, i))))
				return (NULL);
			while (s[i] != c && s[i])
				a[j][k++] = s[i++];
			a[j++][k] = '\0';
		}
	}
	a[j] = NULL;
	return (a);
}
