/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:29:37 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/23 19:01:12 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

static void	event_callback_extended(t_fractal	*fractal);
static void	key_callback_extended(mlx_key_data_t keydata, t_fractal	*fractal);

void	event_callback(void *param)
{
	t_fractal	*fractal;

	fractal = param;
	if (fractal->cycle == 1)
		fr_inc_hue(fractal);
	if (mlx_is_key_down(fractal->win, MLX_KEY_T))
		fr_inc_iter(fractal);
	if (mlx_is_key_down(fractal->win, MLX_KEY_G))
		fr_dec_iter(fractal);
	if (mlx_is_key_down(fractal->win, MLX_KEY_KP_ADD))
		fr_inc_static_zoom(fractal);
	if (mlx_is_key_down(fractal->win, MLX_KEY_KP_SUBTRACT))
		fr_dec_static_zoom(fractal);
	if (mlx_is_key_down(fractal->win, MLX_KEY_DOWN))
		fr_move_down(fractal);
	if (mlx_is_key_down(fractal->win, MLX_KEY_LEFT))
		fr_move_left(fractal);
	if (mlx_is_key_down(fractal->win, MLX_KEY_RIGHT))
		fr_move_right(fractal);
	if (mlx_is_key_down(fractal->win, MLX_KEY_UP))
		fr_move_up(fractal);
	event_callback_extended(fractal);
}

static void	event_callback_extended(t_fractal *fractal)
{
	if (mlx_is_key_down(fractal->win, MLX_KEY_U))
		fr_inc_c_real(fractal);
	if (mlx_is_key_down(fractal->win, MLX_KEY_J))
		fr_dec_c_real(fractal);
	if (mlx_is_key_down(fractal->win, MLX_KEY_I))
		fr_inc_c_img(fractal);
	if (mlx_is_key_down(fractal->win, MLX_KEY_K))
		fr_dec_c_img(fractal);
}

void	key_callback(mlx_key_data_t keydata, void *param)
{
	t_fractal	*fractal;

	fractal = param;
	if (keydata.key == MLX_KEY_ESCAPE && keydata.action == MLX_PRESS)
		mlx_close_window(fractal->win);
	if (keydata.key == MLX_KEY_C && keydata.action == MLX_PRESS)
		fractal->cycle = !fractal->cycle;
	if (keydata.key == MLX_KEY_SPACE && keydata.action == MLX_PRESS)
		fr_reset(fractal);
	if (keydata.key == MLX_KEY_Q && keydata.action == MLX_PRESS)
		fr_inc_hue(fractal);
	if (keydata.key == MLX_KEY_A && keydata.action == MLX_PRESS)
		fr_dec_hue(fractal);
	if (keydata.key == MLX_KEY_W && keydata.action == MLX_PRESS)
		fr_inc_saturation(fractal);
	if (keydata.key == MLX_KEY_S && keydata.action == MLX_PRESS)
		fr_dec_saturation(fractal);
	if (keydata.key == MLX_KEY_E && keydata.action == MLX_PRESS)
		fr_inc_bright(fractal);
	if (keydata.key == MLX_KEY_D && keydata.action == MLX_PRESS)
		fr_dec_bright(fractal);
	key_callback_extended(keydata, fractal);
}

static void	key_callback_extended(mlx_key_data_t keydata, t_fractal	*fractal)
{
	if (keydata.key == MLX_KEY_1 && keydata.action == MLX_PRESS)
		fr_set(fractal, MANDELBROT);
	if (keydata.key == MLX_KEY_2 && keydata.action == MLX_PRESS)
		fr_set(fractal, JULIA);
	if (keydata.key == MLX_KEY_3 && keydata.action == MLX_PRESS)
		fr_set(fractal, BURNING_SHIP);
}

void	mouse_callback(double xdelta, double ydelta, void *param)
{
	t_fractal	*fractal;

	fractal = param;
	if (ydelta > 0)
		fr_inc_cursor_zoom(fractal);
	else if (ydelta < 0)
		fr_dec_cursor_zoom(fractal);
}
