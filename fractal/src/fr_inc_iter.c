/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_inc_iter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:58:46 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/18 15:40:03 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

void	fr_inc_iter(t_fractal *fractal)
{
	if (fractal->iter < MAX_ITER)
	{
		fractal->iter += STEP_ITER;
		fr_paint(fractal);
	}
}
