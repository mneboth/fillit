/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetriminos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneboth <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 23:54:20 by mneboth           #+#    #+#             */
/*   Updated: 2016/11/29 05:00:26 by mneboth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

int		ft_istetriminos(char *tetriminos, int i, char letter)
{
	int		hash;

	hash = 0;
	if (i >= 0 && i < 20 && tetriminos[i] == '#')
	{
		tetriminos[i] = letter;
		++hash;
		hash = hash + ft_istetriminos(tetriminos, i + 1, letter);
		hash = hash + ft_istetriminos(tetriminos, i + 5, letter);
		hash = hash + ft_istetriminos(tetriminos, i - 1, letter);
		hash = hash + ft_istetriminos(tetriminos, i - 5, letter);
	}
	return (hash);
}

void	ft_reset_tetriminos(char *tetriminos)
{
	int		i;

	i = 0;
	while (tetriminos[i])
	{
		if (tetriminos[i] <= 'Z' && tetriminos[i] >= 'A')
			tetriminos[i] = tetriminos[i] + 32;
		++i;
	}
}

void	ft_bzero_tetriminos(char **tetriminos)
{
	int		i;

	i = -1;
	while (++i < 26)
		tetriminos[i] = NULL;
}

void	ft_reset_all_tetriminos(char **tetriminos)
{
	int		i;

	i = 0;
	while (tetriminos[i])
	{
		ft_reset_tetriminos(tetriminos[i]);
		++i;
	}
}

void	ft_init_solution(char *solution, int width)
{
	int		i;

	i = 0;
	while (i < (width + 1) * width)
	{
		if ((i + 1) % (width + 1) == 0)
			solution[i] = '\n';
		else
			solution[i] = '.';
		++i;
	}
}
