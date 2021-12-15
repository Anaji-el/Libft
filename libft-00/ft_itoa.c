/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:05:21 by anaji-el          #+#    #+#             */
/*   Updated: 2021/12/02 17:26:05 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	how_long(long nb)
{
	int		l;

	l = 0;
	if (nb == 0)
		l++;
	if (nb < 0)
	{
		nb = -nb;
		l++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char	*a;
	long	nb;
	int		i;

	nb = n;
	i = how_long(nb);
	a = (char *)malloc(i + 1);
	if (a == 0)
		return (NULL);
	a[i] = '\0';
	i--;
	if (nb < 0)
	{
		a[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		a[0] = 48;
	while (nb > 0)
	{
		a[i] = (nb % 10) + 48;
		nb = nb / 10;
		i--;
	}
	return (a);
}
