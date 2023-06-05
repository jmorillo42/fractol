/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractal.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:45:24 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/24 09:51:58 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTAL_H
# define FRACTAL_H

# include <math.h>
# include "../../point/include/point.h"
# include "../../ft/include/ft.h"
# include "../../mlx42/include/MLX42/MLX42.h"

# define F_MIN_X			-10.0
# define F_MAX_X			10.0
# define F_MIN_Y			-10.0
# define F_MAX_Y			10.0
# define MANDELBROT			'M'
# define M_RANGE			3.2
# define M_OFFSET_X			-2.2
# define M_OFFSET_Y			-1.6
# define JULIA				'J'
# define J_RANGE			3.6
# define J_OFFSET_X			-1.9
# define J_OFFSET_Y			-1.7
# define BURNING_SHIP		'B'
# define B_RANGE			4.1
# define B_OFFSET_X			-2.5
# define B_OFFSET_Y			-2.5
# define INIT_ITER			80
# define MAX_ITER			99999
# define MIN_ITER			10
# define STEP_ITER			5
# define INIT_ZOOM			0
# define MAX_ZOOM			999
# define MIN_ZOOM			-999
# define STEP_ZOOM			1.1
# define INIT_HUE			0.0
# define STEP_HUE			10.0
# define INIT_SATURATION	0.65
# define STEP_SATURATION	0.05
# define INIT_BRIGHT		0.85
# define STEP_BRIGHT		0.05
# define INIT_CYCLE			0

typedef struct s_fractal
{
	mlx_t			*win;
	mlx_image_t		*img;
	char			f_type;
	t_complex		*f_max;
	t_complex		*f_min;
	t_complex		*f_offset;
	t_complex		*f_range;
	t_complex		*j_c;
	t_complex		*range;
	t_complex		*offset;
	t_point			*point;
	int				width;
	int				height;
	unsigned int	iter;
	int				zoom;
	int				cycle;
	float			hue;
	float			saturation;
	float			bright;
}	t_fractal;

double			fr_burningship(t_fractal *fractal);
t_fractal		*fr_create(int width, int height, char f_type, t_complex *c);
void			fr_dec_bright(t_fractal *fractal);
void			fr_dec_c_real(t_fractal *fractal);
void			fr_dec_c_img(t_fractal *fractal);
void			fr_dec_cursor_zoom(t_fractal *fractal);
void			fr_dec_hue(t_fractal *fractal);
void			fr_dec_iter(t_fractal *fractal);
void			fr_dec_saturation(t_fractal *fractal);
void			fr_dec_static_zoom(t_fractal *fractal);
void			fr_dec_zoom(t_fractal *fractal);
void			fr_destroy(t_fractal **fractal);
void			fr_inc_bright(t_fractal *fractal);
void			fr_inc_c_real(t_fractal *fractal);
void			fr_inc_c_img(t_fractal *fractal);
void			fr_inc_cursor_zoom(t_fractal *fractal);
void			fr_inc_hue(t_fractal *fractal);
void			fr_inc_iter(t_fractal *fractal);
void			fr_inc_saturation(t_fractal *fractal);
void			fr_inc_static_zoom(t_fractal *fractal);
void			fr_inc_zoom(t_fractal *fractal);
void			fr_init(t_fractal *fractal);
double			fr_iteration(t_fractal *fractal);
double			fr_julia(t_fractal *fractal);
double			fr_mandelbrot(t_fractal *fractal);
void			fr_move_down(t_fractal *fractal);
void			fr_move_left(t_fractal *fractal);
void			fr_move_right(t_fractal *fractal);
void			fr_move_up(t_fractal *fractal);
void			fr_paint(t_fractal	*fractal);
unsigned int	fr_pixel_color(t_fractal *fractal, double iteration);
void			fr_reset(t_fractal *fractal);
void			fr_set(t_fractal *fractal, char f_type);

#endif
