/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneboth <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 23:47:18 by mneboth           #+#    #+#             */
/*   Updated: 2016/11/29 03:23:37 by mneboth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int i)
{
	unsigned char c;

	c = (unsigned char)i;
	if (c == '\t' || c == '\n' || c == ' ' || \
			c == '\v' || c == '\r' || c == '\f')
		return (1);
	return (0);
}
