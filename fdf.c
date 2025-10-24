/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:07:55 by ouamarko          #+#    #+#             */
/*   Updated: 2025/10/24 18:48:46 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fdf.h"

int	close_window(void *param)
{
	(void)param;
	exit(0);
}

int	main(int argc, char **argv)
{
	void	*mlx_ptr;
	void	*window;
	int	fd;
	char	*line;

	fd = open(argv[1], O_RDONLY);
	if (argc != 2)
		return 0;
	if (fd < 0)
		return (perror("open"), 1);
	mlx_ptr = mlx_init();
	if (!mlx_ptr)
		return (0);
	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	window = mlx_new_window(mlx_ptr, 800, 720, "Fdf");
	mlx_pixel_put(mlx_ptr, window, 400, 300, 0xFF0000);
	mlx_hook(window, 17, 0, close_window, NULL);
	mlx_loop(mlx_ptr);
	return (0);
}
