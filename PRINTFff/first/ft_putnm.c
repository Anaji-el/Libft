/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 01:19:56 by anaji-el          #+#    #+#             */
/*   Updated: 2021/12/15 01:09:59 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


void	ft_putnm(int n, int *count)
{
	if (n < 0)
	{
		ft_putchar('-' , count);
			(n = -n);
	}
	if (n < 9)
	{
		ft_putchar(n + 48 ,count);
	}
	else
	{
		ft_putnm(n / 10, count);
		ft_putnm(n % 10, count);
	}
}

/*int main()
{
	int count;
	count = 0;
	ft_putnm(-2123, &count);
	printf("\n%d",count);
}*/