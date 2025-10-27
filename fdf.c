/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:07:55 by ouamarko          #+#    #+#             */
/*   Updated: 2025/10/27 15:23:46 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fdf.h"

int	close_window(void *param)
{
	(void)param;
	exit(0);
}

void	ft_parsemap(int fd, t_map *map)
{
	int	x;
	int	y;
	char	*line;

	x = 0;
	y = 1;
	while ((line = get_next_line(fd)))
	{
		while (line[x])
		{
			if (line[x] != '0')
			{
				map->point[y][x].x = x;
				map->point[y][x].y = y;
				map->point[y][x].z = line[x] - '0';
			}
			x++;
		}
		x = 0;
		y++;
	}

}

int	main(int argc, char **argv)
{
	void	*mlx_ptr;
	void	*window;
	t_map	*map;
	t_point	point;
	int	fd;
	int	i;

	i = 0;
	if (argc != 2)
		return 0;
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (perror("open"), 1);
	map = malloc(sizeof(t_map));
	if (!map)
		return (perror("malloc"), 1);
	mlx_ptr = mlx_init();
	if (!mlx_ptr)
		return (0);
	ft_lenght(fd, map);
	printf("%d\n", map->lenght);	
	printf("%d\n", map->width);	
	printf("%d\n", map->point[2][3].z);	
	map->point = malloc(map->lenght * sizeof(point));
	while(i < map->lenght - 1)
	{
		map->point[i] = malloc(map->width * sizeof(t_point));
		i++;
	}
	ft_parsemap(fd, map);
	window = mlx_new_window(mlx_ptr, 800, 720, "Fdf");
	mlx_hook(window, 17, 0, close_window, NULL);
	mlx_loop(mlx_ptr);
	return (0);
}
