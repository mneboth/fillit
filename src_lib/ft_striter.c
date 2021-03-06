/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneboth <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:14:35 by mneboth           #+#    #+#             */
/*   Updated: 2016/11/29 03:34:37 by mneboth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s != (void *)0 && f != (void *)0)
	{
		while (*s != '\0')
		{
			(*f)(s);
			s++;
		}
	}
}
