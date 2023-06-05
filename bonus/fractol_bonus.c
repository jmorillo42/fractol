/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:37:25 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/24 12:24:48 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol_bonus.h"

int	main(int argc, char **argv)
{
	t_fractal	*fractal;
	char		f_type;
	t_complex	*c;

	read_args(argc, argv, &f_type, &c);
	if (!f_type)
		print_warning();
	else
		print_help();
	fractal = fr_create(WIDTH, HEIGHT, f_type, c);
	if (!fractal)
		exit(EXIT_FAILURE);
	mlx_image_to_window(fractal->win, fractal->img, 0, 0);
	mlx_loop_hook(fractal->win, &event_callback, fractal);
	mlx_scroll_hook(fractal->win, &mouse_callback, fractal);
	mlx_key_hook(fractal->win, &key_callback, fractal);
	mlx_loop(fractal->win);
	fr_destroy(&fractal);
	return (EXIT_SUCCESS);
}
