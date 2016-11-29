/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneboth <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 23:54:54 by mneboth           #+#    #+#             */
/*   Updated: 2016/11/29 03:40:22 by mneboth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

char	**ft_check_file(int fd);
char	*ft_resolve(char **tetriminos);

int		ft_istetriminos(char *tetriminos, int i, char letter);
void	ft_bzero_tetriminos(char **tetriminos);
void	ft_reset_tetriminos(char *tetriminos);
void	ft_reset_all_tetriminos(char **tetriminos);
void	ft_init_solution(char *solution, int width);
#endif
