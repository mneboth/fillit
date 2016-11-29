/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneboth <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 23:48:12 by mneboth           #+#    #+#             */
/*   Updated: 2016/11/29 03:37:24 by mneboth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	tmp;
	size_t	i;
	size_t	lenght;

	i = 0;
	lenght = ft_strlen(str);
	while (i < lenght / 2)
	{
		tmp = str[i];
		str[i] = str[lenght - i - 1];
		str[lenght - i - 1] = tmp;
		i++;
	}
	return (str);
}
