/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_move_down.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:52:01 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/18 20:34:55 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

void	fr_move_down(t_fractal *fractal)
{
	if (fractal->offset->i + fractal->range->i < fractal->f_max->i)
	{
		fractal->offset->i += fractal->range->i / 10;
		fr_paint(fractal);
	}
}
