/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_move_right.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:51:50 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/18 20:34:15 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

void	fr_move_right(t_fractal *fractal)
{
	if (fractal->offset->r + fractal->range->r < fractal->f_max->r)
	{
		fractal->offset->r += fractal->range->r / 10;
		fr_paint(fractal);
	}
}
