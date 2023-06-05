/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_dec_c_img.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:42:54 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/23 18:47:16 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

void	fr_dec_c_img(t_fractal *fractal)
{
	if (fractal->f_type == JULIA)
	{
		fractal->point->c->i -= 0.01;
		fr_paint(fractal);
	}
}
