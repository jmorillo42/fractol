/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:51:29 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/25 10:29:51 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "../fractal/include/fractal.h"
# include "../mlx42/include/MLX42/MLX42.h"

# define WIDTH	500
# define HEIGHT	500

# define CYAN	"\x1b[1;36m"
# define GRAY	"\x1b[1;30m"
# define RED	"\x1b[1;31m"
# define RESET	"\x1b[0m"

void	event_callback(void *param);
void	key_callback(mlx_key_data_t keydata, void *param);
void	mouse_callback(double xdelta, double ydelta, void *param);
void	print_help(void);
void	print_warning(void);
void	read_args(int argc, char **argv, char *f_type, t_complex **c);

#endif
