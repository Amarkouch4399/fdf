/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:13:52 by ouamarko          #+#    #+#             */
/*   Updated: 2025/10/24 19:13:03 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
#define FDF_H

#include "../minilibx-linux/mlx.h"
#include "../gnl/get_next_line.h"
#include <stdlib.h>

typedef struct s_map
{
    int width;
    int lenght;
} t_map;

typedef struct s_point
{
	int x;
	int y;
	int z;
} t_point;

int	close_window(void *param);
char	**ft_split(char const *s, char c);
#endif
