/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 23:15:38 by hseffian          #+#    #+#             */
/*   Updated: 2019/04/21 20:41:47 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*r;

	i = ft_strlen(s1);
	if ((r = (char *)malloc(sizeof(char) * i + 1)) == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		r[i] = s1[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
