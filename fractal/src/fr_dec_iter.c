/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_dec_iter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:59:00 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/18 15:39:42 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

void	fr_dec_iter(t_fractal *fractal)
{
	if (fractal->iter > MIN_ITER)
	{
		fractal->iter -= STEP_ITER;
		fr_paint(fractal);
	}
}
