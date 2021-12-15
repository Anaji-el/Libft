/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:48:31 by anaji-el          #+#    #+#             */
/*   Updated: 2021/11/30 23:01:33 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ddst;
	unsigned char	*ssrc;
	size_t			i;

	if (!dst && !src)
		return (0);
	ddst = (unsigned char *) dst;
	ssrc = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		ddst[i] = ssrc[i];
		i++;
	}
	return (ddst);
}
