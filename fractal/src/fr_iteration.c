/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_iteration.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:25:36 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/23 18:01:49 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

double	fr_iteration(t_fractal *fractal)
{
	double	iteration;

	iteration = 0.0;
	if (fractal->f_type == MANDELBROT)
		iteration = fr_mandelbrot(fractal);
	else if (fractal->f_type == JULIA)
		iteration = fr_julia(fractal);
	else if (fractal->f_type == BURNING_SHIP)
		iteration = fr_burningship(fractal);
	return (iteration);
}
