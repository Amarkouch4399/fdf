/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:13:52 by ouamarko          #+#    #+#             */
/*   Updated: 2025/10/21 18:14:06 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
#define FDF_H

#include "../minilibx-linux/mlx.h"
#include "../gnl/get_next_line.h"
#include <stdlib.h>

typedef struct s_data
{
    void *mlx;
    void *win;
}   t_data;

int	close_window(void *param);
#endif
