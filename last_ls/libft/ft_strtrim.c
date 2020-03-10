/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 01:37:15 by hseffian          #+#    #+#             */
/*   Updated: 2019/04/21 22:21:55 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*a;
	int		i;
	int		j;

	i = 0;
	if (!s)
		return (NULL);
	j = ft_strlen(s) - 1;
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while (i < j && (s[j] == ' ' || s[j] == '\n' || s[j] == '\t'))
		j--;
	if (i <= j)
		return (ft_strsub(s, i, j - i + 1));
	else
	{
		a = (char *)malloc(sizeof(char) * 1);
		a[0] = '\0';
		return (a);
	}
}
