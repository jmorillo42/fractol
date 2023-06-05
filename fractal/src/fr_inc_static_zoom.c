/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_inc_static_zoom.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:13:32 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/21 15:24:37 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

void	fr_inc_static_zoom(t_fractal *fractal)
{
	if (fractal->zoom < MAX_ZOOM)
	{
		fractal->zoom++;
		if (fractal->zoom > 0)
			fractal->iter += !(fractal->zoom % 4);
		fractal->offset->r += fractal->range->r / 2;
		fractal->offset->i += fractal->range->i / 2;
		fractal->range->r /= STEP_ZOOM;
		fractal->range->i /= STEP_ZOOM;
		fractal->offset->r -= fractal->range->r / 2;
		fractal->offset->i -= fractal->range->i / 2;
		fr_paint(fractal);
	}
}
