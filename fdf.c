/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:07:55 by ouamarko          #+#    #+#             */
/*   Updated: 2025/10/21 18:12:50 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fdf.h"

int	close_window(void *param)
{
	(void)param;
	exit(0);
}

int	main()
{
	void	*mlx_ptr;
	void	*window;

	mlx_ptr = mlx_init();
	if (!mlx_ptr)
		return (0);
	window = mlx_new_window(mlx_ptr, 800, 720, "Fdf");
	mlx_pixel_put(mlx_ptr, window, 400, 300, 0xFF0000);
	mlx_hook(window, 17, 0, close_window, NULL);
	mlx_loop(mlx_ptr);
	return (0);
}
