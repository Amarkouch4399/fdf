/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:13:52 by ouamarko          #+#    #+#             */
/*   Updated: 2025/10/27 14:28:46 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
#define FDF_H

#include "../minilibx-linux/mlx.h"
#include "../gnl/get_next_line.h"
#include <stdlib.h>

typedef struct s_point
{
	int	x;
	int	y;
	int	z;
} t_point;

typedef struct s_map
{
    int	width;
    int	lenght;
    t_point	**point;
} t_map;

int	close_window(void *param);
char	**ft_split(char const *s, char c);
void	ft_lenght(int fd, t_map *map);
long	ft_atoi(char *nptr);
void	ft_parsemap(int fd, t_map *map);
#endif
