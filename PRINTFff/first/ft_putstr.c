/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:28:59 by anaji-el          #+#    #+#             */
/*   Updated: 2021/12/12 01:32:51 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "printf.h"

void	ft_putstr(char *str, int *count)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i], count);
		i++;
	}
}
/*int main()
{
	int n = 0;
	ft_putstr("ayoub",&n);
	printf("%d",n);
}*/