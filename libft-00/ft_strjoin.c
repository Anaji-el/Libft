/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 04:27:09 by anaji-el          #+#    #+#             */
/*   Updated: 2021/12/06 21:47:10 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;
	int		f;

	i = 0;
	j = 0;
	f = 0;
	if (!s1 || !s2)
		return (NULL);
	new_str = malloc(ft_strlen(s1) + ft_strlen(s2) +1);
	if (!new_str)
		return (NULL);
	if (!s1 && !s2)
		return (NULL);
	while (s1[i])
		new_str[j++] = s1[i++];
	while (s2[f])
		new_str[j++] = s2[f++];
	new_str[j] = '\0';
	return (new_str);
}
