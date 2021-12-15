/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_XLdecimal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 04:13:29 by anaji-el          #+#    #+#             */
/*   Updated: 2021/12/15 04:14:12 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    ft_XLdecimal(unsigned int n,int *count)
{
    char    *c;
    c =  ("0123456789abcdef");
	
    if (n < 16)
    {
        ft_putchar(c[n] ,count);
    }
    else
	{
		ft_XLdecimal(n / 16 ,count);
		ft_XLdecimal(n % 16 ,count);
	}
	
}