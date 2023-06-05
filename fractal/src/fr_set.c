/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_set.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:54:01 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/23 19:19:27 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

static void	set_mandelbrot(t_fractal *fractal);
static void	set_julia(t_fractal *fractal);
static void	set_burningship(t_fractal *fractal);

void	fr_set(t_fractal *fractal, char f_type)
{
	if (fractal->f_type == f_type)
		return ;
	fractal->f_type = f_type;
	if (f_type == MANDELBROT)
		set_mandelbrot(fractal);
	else if (f_type == JULIA)
		set_julia(fractal);
	else if (f_type == BURNING_SHIP)
		set_burningship(fractal);
	fr_reset(fractal);
}

static void	set_mandelbrot(t_fractal *fractal)
{
	fractal->f_max->r = F_MAX_X;
	fractal->f_max->i = F_MAX_Y;
	fractal->f_min->r = F_MIN_X;
	fractal->f_min->i = F_MIN_Y;
	fractal->f_offset->r = M_OFFSET_X;
	fractal->f_offset->i = M_OFFSET_Y;
	fractal->f_range->r = M_RANGE;
	fractal->f_range->i = M_RANGE * fractal->height / fractal->width;
}

static void	set_julia(t_fractal *fractal)
{
	fractal->f_max->r = F_MAX_X;
	fractal->f_max->i = F_MAX_Y;
	fractal->f_min->r = F_MIN_X;
	fractal->f_min->i = F_MIN_Y;
	fractal->f_offset->r = J_OFFSET_X;
	fractal->f_offset->i = J_OFFSET_Y;
	fractal->f_range->r = J_RANGE;
	fractal->f_range->i = J_RANGE * fractal->height / fractal->width;
	fractal->point->c->r = fractal->j_c->r;
	fractal->point->c->i = fractal->j_c->i;
}

static void	set_burningship(t_fractal *fractal)
{
	fractal->f_max->r = F_MAX_X;
	fractal->f_max->i = F_MAX_Y;
	fractal->f_min->r = F_MIN_X;
	fractal->f_min->i = F_MIN_Y;
	fractal->f_offset->r = B_OFFSET_X;
	fractal->f_offset->i = B_OFFSET_Y;
	fractal->f_range->r = B_RANGE;
	fractal->f_range->i = B_RANGE * fractal->height / fractal->width;
}
