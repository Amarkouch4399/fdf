/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lenght.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:04:16 by ouamarko          #+#    #+#             */
/*   Updated: 2025/10/26 18:04:58 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	ft_lenght(int fd, t_map *map)
{
	int	lenght;
	int	width;
	char	*line;
	char	**tab;
	lenght = 0;
	width = 0;

	line = get_next_line(fd);
	tab = ft_split(line, ' ');
	while (tab[width])
		width++;
	while ((line = get_next_line(fd)))
	{
		lenght++;
		printf("%s", line);	
		free(line);
	}
	free(tab);
	map->width = width;
	map->lenght = lenght + 1;
	close(fd);
}
