/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 21:35:09 by hseffian          #+#    #+#             */
/*   Updated: 2019/04/21 22:51:06 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	unsigned int	nb;
	size_t			i;
	int				sign;
	char			*a;

	i = 0;
	if (n >= 0 && (a = ft_strnew(ft_count_num(n))) == NULL)
		return (NULL);
	if ((sign = n) < 0)
	{
		nb = -n;
		if ((a = ft_strnew(ft_count_num(n) + 1)) == NULL)
			return (NULL);
	}
	else
		nb = n;
	a[i++] = nb % 10 + '0';
	while ((nb /= 10) > 0)
		a[i++] = nb % 10 + '0';
	if (sign < 0)
		a[i++] = '-';
	a[i] = '\0';
	ft_reverse(a);
	return (a);
}
