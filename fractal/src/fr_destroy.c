/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:58:03 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/23 19:15:23 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractal.h"

void	fr_destroy(t_fractal **fractal)
{
	if (*fractal)
	{
		if ((*fractal)->img)
		{
			mlx_delete_image((*fractal)->win, (*fractal)->img);
			(*fractal)->img = NULL;
		}
		if ((*fractal)->win)
		{
			mlx_terminate((*fractal)->win);
			(*fractal)->win = NULL;
		}
		cx_destroy(&(*fractal)->f_max);
		cx_destroy(&(*fractal)->f_min);
		cx_destroy(&(*fractal)->f_offset);
		cx_destroy(&(*fractal)->f_range);
		cx_destroy(&(*fractal)->j_c);
		cx_destroy(&(*fractal)->range);
		cx_destroy(&(*fractal)->offset);
		pt_destroy(&(*fractal)->point);
	}
	free(*fractal);
	*fractal = NULL;
}
