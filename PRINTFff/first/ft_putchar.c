/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 19:19:36 by anaji-el          #+#    #+#             */
/*   Updated: 2021/12/15 01:32:18 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putchar(int n,int *count)
{
	write(1 ,&n , 1);
	(*count)++;
}
/*int main()
{
	int i = 0;
	ft_putchar('n',&i);
}*/