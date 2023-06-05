/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_inc_saturation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:43:18 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/18 15:40:07 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

void	fr_inc_saturation(t_fractal *fractal)
{
	if (fractal->saturation < 1.0)
	{
		fractal->saturation += STEP_SATURATION;
		if (fractal->saturation > 1.0)
			fractal->saturation = 1.0;
		fr_paint(fractal);
	}
}
