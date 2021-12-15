/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsdeci.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 23:17:42 by anaji-el          #+#    #+#             */
/*   Updated: 2021/12/15 01:54:29 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_unsdeci(unsigned int n, int *count)
{
	if (n <= 9)

	{
		ft_putchar(n + 48 ,count);
	}
	else
	{
		ft_unsdeci(n / 10 ,count);
		ft_unsdeci(n % 10 ,count);
	}
}

/*int main()
{
	int count;
	count = 0;
	ft_unsdeci((unsigned int)-2123, &count);
	printf("%d",count);
}*/