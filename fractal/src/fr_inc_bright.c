/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_inc_bright.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:18:24 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/18 18:20:41 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

void	fr_inc_bright(t_fractal *fractal)
{
	if (fractal->bright < 1.0)
	{
		fractal->bright += STEP_BRIGHT;
		if (fractal->bright > 1.0)
			fractal->bright = 1.0;
		fr_paint(fractal);
	}
}
