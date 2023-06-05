/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_paint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:17:16 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/29 11:10:06 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

void	print_stats(t_fractal *fractal);

void	fr_paint(t_fractal *fractal)
{
	t_point			*p;
	double			iter;
	unsigned int	color;

	p = fractal->point;
	p->x = 0;
	while (p->x < fractal->width)
	{
		p->y = 0;
		while (p->y < fractal->height)
		{
			iter = fr_iteration(fractal);
			color = fr_pixel_color(fractal, iter);
			mlx_put_pixel(fractal->img, p->x, p->y, color);
			p->y++;
		}
		p->x++;
	}
}
