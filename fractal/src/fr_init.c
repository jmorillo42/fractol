/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:59:50 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/27 18:02:56 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

void	fr_init(t_fractal *fractal)
{
	fractal->range->r = fractal->f_range->r;
	fractal->range->i = fractal->f_range->i;
	fractal->offset->r = fractal->f_offset->r;
	fractal->offset->i = fractal->f_offset->i;
	cx_set(fractal->point->c, fractal->j_c->r, fractal->j_c->i);
	fractal->iter = INIT_ITER;
	fractal->zoom = INIT_ZOOM;
	fractal->cycle = INIT_CYCLE;
	fractal->hue = INIT_HUE;
	fractal->saturation = INIT_SATURATION;
	fractal->bright = INIT_BRIGHT;
}
