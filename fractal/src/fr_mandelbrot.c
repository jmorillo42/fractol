/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_mandelbrot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:26:49 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/23 18:21:03 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

double	fr_mandelbrot(t_fractal *fractal)
{
	unsigned int	iteration;
	t_point			*p;

	p = fractal->point;
	cx_set(p->c, ((double)p->x * fractal->range->r / fractal->width)
		+ fractal->offset->r,
		((double)p->y * fractal->range->i / fractal->height)
		+ fractal->offset->i);
	cx_set(p->z, 0.0, 0.0);
	cx_set(p->z2, 0.0, 0.0);
	iteration = 0;
	while (iteration < fractal->iter && p->z2->r + p->z2->i <= 4)
	{
		p->z->i = 2 * p->z->r * p->z->i + p->c->i;
		p->z->r = p->z2->r - p->z2->i + p->c->r;
		p->z2->r = p->z->r * p->z->r;
		p->z2->i = p->z->i * p->z->i;
		iteration++;
	}
	if (iteration == fractal->iter)
		return (0.0);
	return (((double)iteration - log2(log2(p->z2->r + p->z2->i)) + 4.0)
		/ fractal->iter);
}
