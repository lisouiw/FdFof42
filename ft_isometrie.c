/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isometrie.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:37:01 by ltran             #+#    #+#             */
/*   Updated: 2017/03/17 16:49:45 by ltran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_isometrie(int *x1, int *y1, int *x2, int *y2)
{
	int		tmpx = *x1;
	int		tmpy = *y1;
	int		tmpi = *x2;
	int		tmpj = *y2;

	*x1 = ((tmpx + tmpy) / 2);
	*y1 = ((tmpx - tmpy) / 2);
	*y2 = ((tmpi - tmpj) / 2);
	*x2 = ((tmpi + tmpj) / 2);
}
