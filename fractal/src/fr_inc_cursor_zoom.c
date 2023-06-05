/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_inc_cursor_zoom.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:56:32 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/27 17:56:17 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

void	fr_inc_cursor_zoom(t_fractal *fractal)
{
	int		cursor_x;
	int		cursor_y;
	double	x_pos_rel;
	double	y_pos_rel;

	if (fractal->zoom < MAX_ZOOM)
	{
		mlx_get_mouse_pos(fractal->win, &cursor_x, &cursor_y);
		if (cursor_x >= 0 && cursor_x < fractal->width
			&& cursor_y >= 0 && cursor_y < fractal->height)
		{
			fractal->zoom++;
			if (fractal->zoom > 0)
				fractal->iter += !(fractal->zoom % 4);
			x_pos_rel = fractal->range->r * (double)cursor_x / fractal->width;
			y_pos_rel = fractal->range->i * (double)cursor_y / fractal->height;
			fractal->offset->r += x_pos_rel * (STEP_ZOOM - 1) / STEP_ZOOM;
			fractal->offset->i += y_pos_rel * (STEP_ZOOM - 1) / STEP_ZOOM;
			fractal->range->r /= STEP_ZOOM;
			fractal->range->i /= STEP_ZOOM;
			fr_paint(fractal);
		}
	}
}
