/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_pixel_color.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:57:40 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/18 18:56:20 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

// Otras opciones de cálculo del color:
//
// Con color fijo en RGB y modificación del canal alpha según la iteración.
// El color base se puede modificar dinámicamente mediante teclado.
// Solo se obtienen fractales monocromáticos.
//	iteration = fractal->color | (255 - iteration * 255 / fractal->iter);
//
// Con color fijo en HSVA y modificación del canal brillo según la iteración.
// El tono y la saturación se pueden modificar dinámicamente mediante teclado.
// Solo se obtienen fractales monocromáticos.
//	iteration = hsva_to_rgba(fractal->hue, fractal->saturation, 1
//		- (float)iteration / (float)fractal->iter, 255);
//
// Con color fijo en HSVA y modificación del canal brillo según la iteración.
// El tono y la saturación se pueden modificar dinámicamente mediante teclado.
// Solo se obtienen fractales monocromáticos.
// Es una una mejora del anterior: se obtiene una gradación de los tonos al
// interpolar el resultado de la iteración.
//	iteration = hsva_to_rgba(fractal->hue, fractal->saturation, 1
//		- ((float)iteration - log2(log2(x2 + y2)) + 4.0) / fractal->iter, 255);
//
// Con color en HSVA y modificación del canal tono según la iteración.
// El tono, la saturación y el brillo se pueden modificar dinámicamente
// mediante teclado.
unsigned int	fr_pixel_color(t_fractal *fractal, double iteration)
{
	unsigned int	rgba;
	float			hue;

	if (iteration == 0.0)
		rgba = 255;
	else
	{
		hue = fractal->hue + 360 * iteration;
		if (hue >= 360)
			hue -= 360;
		rgba = hsva_to_rgba(hue, fractal->saturation, fractal->bright, 255);
	}
	return (rgba);
}
