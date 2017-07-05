/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 15:49:25 by ltran             #+#    #+#             */
/*   Updated: 2017/07/05 17:45:44 by ltran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

#define BUFF_SIZE 2000000

#include "minilibx_macos/mlx.h"
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include "libft/libft.h"
#include <fcntl.h>
#include <sys/stat.h>

typedef struct		s_coord
{
	int				x;
	int				y;
}					t_coord;

void	trace(int x1, int y1, int x2, int y2, char *adr, int line);
int		get_info_map(int i, char *buf);
void	start_window(char **map, t_coord *pt);
void	pixel_put(char *adr, int x, int y, int color, int line);
int		ft_key(int keycode, void *param);

#endif
