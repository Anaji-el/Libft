/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 19:13:09 by anaji-el          #+#    #+#             */
/*   Updated: 2021/12/15 04:17:09 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int				ft_printf(const char *, ...);
void			ft_putstr(char *s, int *count);
void			ft_putchar(int n, int *count);
void			ft_putnm(int n, int *count);
void	        ft_unsdeci(unsigned int n, int *count);
void            ft_xdecimal(unsigned int n,int *count);
void            ft_XLdecimal(unsigned int n,int *count);


#endif