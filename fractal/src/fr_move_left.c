/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_move_left.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:51:56 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/18 20:33:39 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

void	fr_move_left(t_fractal *fractal)
{
	if (fractal->offset->r > fractal->f_min->r)
	{
		fractal->offset->r -= fractal->range->r / 10;
		fr_paint(fractal);
	}
}
