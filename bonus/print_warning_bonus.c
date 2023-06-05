/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_warning_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:45:44 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/29 11:14:26 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol_bonus.h"

static void	print_color(char *str, char *color);
static void	print_error(char *str);

void	print_warning(void)
{
	print_color("Los argumentos no son correctos.", RED);
	print_error("\n\nSintaxis:\n");
	print_color("> fractal <NOMBRE_FRACTAL> [<PARÁMETROS>]\n\n", CYAN);
	print_error("NOTA: Los nombres no son sensibles a mayúsculas.\n\n");
	print_error("Hay tres fractales disponibles.\n");
	print_error("- Mandelbrot:\n");
	print_color("  > fractol mandelbrot\n", CYAN);
	print_error("- Julia:\n");
	print_color("  > fractol julia parte_real parte_imaginaria\n", CYAN);
	print_error("- Burning Ship:\n");
	print_color("  > fractol ship\n", CYAN);
	exit (1);
}

static void	print_color(char *str, char *color)
{
	write(2, color, ft_str_len(color));
	write(2, str, ft_str_len(str));
	write(2, RESET, ft_str_len(RESET));
}

static void	print_error(char *str)
{
	write(2, str, ft_str_len(str));
}
