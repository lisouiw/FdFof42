/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trace.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 15:26:57 by ltran             #+#    #+#             */
/*   Updated: 2017/03/23 17:31:32 by ltran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_key(int keycode, void *param)
{
	if (keycode == 53)
		exit(0);
	return (0);
}
/*
void	ft_diagonal_ey(int ex, int ey , int x1, int y1, int x2, int y2, t_l *info)
{
	int     i = 0;
	int		dx;
	int		dy;
	int		ix = 1;
	int		iy = 1;
	int		m = ex;
	int		n = ey;
	
	dx = 2*ex;
	dy = 2*ey;
	if (x1 > x2)
		ix = -1;
	if (y1 > y2)
		iy = -1;
//	printf("EY ==> i = %i || ex = %i || ey = %i || y1 = %i || x1 = %i || ix = %i || iy = %i || dy = %i ||dx = %i\n", i, ex, ey, y1, x1, ix, iy, dy, dx);
//	printf("EY======I = %i && M = %i\n", i, m);
	while (i <= n)
	{
		mlx_pixel_put(info->mlx, info->win, x1, y1, 0X00FFCCCC);
	//	ft_pixel_put(info, x1, y1, 0X00FFCCCC);
		i++;
		y1 += iy;
		ey -= dx;
		if (ey < 0)
		{
			x1 += ix;
			ey += dy;
		}
	}
//	printf("JE SORS\n");
}

void	ft_diagonal_ex(int ex, int ey , int x1, int y1, int x2, int y2, t_l *info)
{
	int     i = 0;
	int		dx;
	int		dy;
	int		ix = 1;
	int		iy = 1;
	int		m = ex;
	int		n = ey;

	dx = 2*ex;
	dy = 2*ey;
	if (x1 > x2)
		ix = -1;
	if (y1 > y2)
		iy = -1;
	//printf("EX ==> i = %i || ex = %i || ey = %i || y1 = %i || x1 = %i || ix = %i || iy = %i || dy = %i ||dx = %i\n", i, ex, ey, y1, x1, ix, iy, dy, dx);
//	printf("EX======I = %i && M = %i\n", i, m);
	while (i <= m)
	{
		mlx_pixel_put(info->mlx, info->win, x1, y1, 0X00FFCCCC);
		//	ft_pixel_put(info, x1, y1, 0X00FFCCCC);
		i++;
		x1 += ix;
		ex -= dy;
		if (ex < 0)
		{
			y1 += iy;
			ex += dx;
		}
	}
//	printf("JE SORS\n");
}

int     ft_get_point(int x1, int y1, int x2, int y2, t_l *info)
{
	int     ex = abs(x2 - x1);
	int     ey = abs(y2 - y1);
//	printf("EX = %i | EY = %i\n== %i === %i ===&&&=== %i ==== %i ====\n", ex, ey,x1, y1,x2,y2);

	info->img = mlx_new_image(info->mlx, X, Y);
	info->addr = mlx_get_data_addr(info->img, &info->bit, &info->size, &info->endian);
	if (ey > ex)
		ft_diagonal_ey(ex, ey, x1, y1, x2, y2, info);
	else
		ft_diagonal_ex(ex, ey, x1, y1, x2, y2, info);
	mlx_pixel_put(info->mlx, info->win, x1, y1, 0X00FF0000);
	mlx_pixel_put(info->mlx, info->win, x2, y2, 0X00FF0000);
	return (0);
}*/