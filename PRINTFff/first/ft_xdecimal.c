/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xdecimal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 01:31:13 by anaji-el          #+#    #+#             */
/*   Updated: 2021/12/15 04:14:36 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    ft_xdecimal(unsigned int n,int *count)
{
    char    *c;
    c =  ("0123456789abcdef");
	
    if (n < 16)
    {
        ft_putchar(c[n] ,count);
    }
    else
	{
		ft_xdecimal(n / 16 ,count);
		ft_xdecimal(n % 16 ,count);
	}
	
}
int main()
{
    int count;
    count = 0;
    ft_xdecimal(456126, &count);
    printf("\n%d",count);
}