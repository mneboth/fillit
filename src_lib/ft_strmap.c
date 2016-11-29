/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneboth <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:24:37 by mneboth           #+#    #+#             */
/*   Updated: 2016/11/29 03:35:30 by mneboth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*map;

	if (s == (void *)0 || f == (void *)0)
		return ((void *)0);
	i = 0;
	if ((map = ft_strnew(ft_strlen(s))) == 0)
		return ((void *)0);
	while (i < ft_strlen(s))
	{
		map[i] = (*f)(s[i]);
		i++;
	}
	return (map);
}
