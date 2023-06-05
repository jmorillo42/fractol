/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_dec_bright.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:18:21 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/18 18:20:05 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

void	fr_dec_bright(t_fractal *fractal)
{
	if (fractal->bright > 0.0)
	{
		fractal->bright -= STEP_BRIGHT;
		if (fractal->bright < 0.0)
			fractal->bright = 0.0;
		fr_paint(fractal);
	}
}
