/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_inc_hue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:42:40 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/18 15:39:55 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

void	fr_inc_hue(t_fractal *fractal)
{
	fractal->hue += STEP_HUE;
	if (fractal->hue >= 360.0)
		fractal->hue -= 360.0;
	fr_paint(fractal);
}
