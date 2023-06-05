/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_move_up.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:51:53 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/18 20:35:15 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

void	fr_move_up(t_fractal *fractal)
{
	if (fractal->offset->i > fractal->f_min->i)
	{
		fractal->offset->i -= fractal->range->i / 10;
		fr_paint(fractal);
	}
}
