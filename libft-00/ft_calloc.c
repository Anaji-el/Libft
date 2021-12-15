/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:47:35 by anaji-el          #+#    #+#             */
/*   Updated: 2021/12/06 19:49:07 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	n;
	size_t	i;

	i = 0;
	n = count * size;
	p = (void *)malloc(n);
	if (!p)
		return (NULL);
	ft_bzero(p, n);
	return (p);
}
