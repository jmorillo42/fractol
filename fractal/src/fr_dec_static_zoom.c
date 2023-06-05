/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_dec_static_zoom.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:23:06 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/21 18:38:42 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

void	fr_dec_static_zoom(t_fractal *fractal)
{
	if (fractal->zoom > MIN_ZOOM)
	{
		fractal->zoom--;
		if (fractal->zoom > 0 && fractal->iter > MIN_ITER)
			fractal->iter -= !(fractal->zoom % 4);
		fractal->offset->r += fractal->range->r / 2;
		fractal->offset->i += fractal->range->i / 2;
		fractal->range->r *= STEP_ZOOM;
		fractal->range->i *= STEP_ZOOM;
		fractal->offset->r -= fractal->range->r / 2;
		fractal->offset->i -= fractal->range->i / 2;
		fr_paint(fractal);
	}
}
