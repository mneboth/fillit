/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneboth <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 23:48:26 by mneboth           #+#    #+#             */
/*   Updated: 2016/11/29 03:38:05 by mneboth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtolower(char *str)
{
	size_t	i;
	char	*str_2;

	i = 0;
	str_2 = malloc(sizeof(char) * ft_strlen(str) + 1);
	while (str[i])
	{
		str_2[i] = ft_tolower(str[i]);
		i++;
	}
	return (str_2);
}
