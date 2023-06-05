/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_dec_cursor_zoom.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:56:24 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/21 18:39:03 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

void	fr_dec_cursor_zoom(t_fractal *fractal)
{
	int		cursor_x;
	int		cursor_y;
	double	x_pos;
	double	y_pos;

	if (fractal->zoom > MIN_ZOOM)
	{
		mlx_get_mouse_pos(fractal->win, &cursor_x, &cursor_y);
		if (cursor_x >= 0 && cursor_x < fractal->width
			&& cursor_y >= 0 && cursor_y < fractal->height)
		{
			fractal->zoom--;
			if (fractal->zoom > 0 && fractal->iter > MIN_ITER)
				fractal->iter -= !(fractal->zoom % 4);
			x_pos = (double)cursor_x / fractal->width;
			y_pos = (double)cursor_y / fractal->height;
			fractal->offset->r -= fractal->range->r * x_pos * (STEP_ZOOM - 1);
			fractal->offset->i -= fractal->range->i * y_pos * (STEP_ZOOM - 1);
			fractal->range->r *= STEP_ZOOM;
			fractal->range->i *= STEP_ZOOM;
			fr_paint(fractal);
		}
	}
}
