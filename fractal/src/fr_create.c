/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_create.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:58:06 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/23 19:20:06 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

static int	create_all_cx(t_fractal *fractal, t_complex *c);
static int	create_point(t_fractal *fractal);

t_fractal	*fr_create(int width, int height, char f_type, t_complex *c)
{
	t_fractal	*fractal;

	fractal = malloc(sizeof(t_fractal));
	if (fractal)
	{
		fractal->width = width;
		fractal->height = height;
		fractal->win = mlx_init(width, height, "fract'ol", false);
		if (!fractal->win)
			return (fr_destroy(&fractal), NULL);
		fractal->img = mlx_new_image(fractal->win, width, height);
		if (!fractal->img)
			return (fr_destroy(&fractal), NULL);
		if (!create_all_cx(fractal, c))
			return (fr_destroy(&fractal), NULL);
		if (!create_point(fractal))
			return (fr_destroy(&fractal), NULL);
		if (fractal)
			fr_set(fractal, f_type);
	}
	return (fractal);
}

static int	create_all_cx(t_fractal *fractal, t_complex *c)
{
	if (!c)
		return (0);
	fractal->j_c = c;
	fractal->f_max = cx_create(0.0, 0.0);
	if (!fractal->f_max)
		return (0);
	fractal->f_min = cx_create(0.0, 0.0);
	if (!fractal->f_min)
		return (0);
	fractal->f_offset = cx_create(0.0, 0.0);
	if (!fractal->f_offset)
		return (0);
	fractal->f_range = cx_create(0.0, 0.0);
	if (!fractal->f_range)
		return (0);
	fractal->range = cx_create(0.0, 0.0);
	if (!fractal->range)
		return (0);
	fractal->offset = cx_create(0.0, 0.0);
	if (!fractal->offset)
		return (0);
	return (1);
}

static int	create_point(t_fractal *fractal)
{
	fractal->point = pt_create();
	if (!fractal->point)
		return (0);
	return (1);
}
