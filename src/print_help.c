/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_help.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:49:11 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/23 18:49:06 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

static void	print_row(char *text, char *key);
static void	print_line(void);

void	print_help(void)
{
	ft_printf("%s┏━━━━━━━━━━━━━━━━━━━━┯━━━━━━━━━━━━━━━━━━━━━┓\n", GRAY);
	print_row("DESPLAZAMIENTO", "CURSORES");
	print_row("ZOOM CURSOR", "RUEDA DEL RATON");
	print_row("ZOOM [+/-]", "NUMPAD + / NUMPAD -");
	print_line();
	print_row("ITERACIONES [+/-]", "T / G");
	print_row("C REAL [+/-]", "U / J");
	print_row("C IMAGINARIA [+/-]", "I / K");
	print_line();
	print_row("TONO [+/-]", "Q / A");
	print_row("SATURACION [+/-]", "W / S");
	print_row("BRILLO [+/-]", "E / D");
	print_row("CICLO COLOR", "C");
	print_line();
	print_row("MANDELBROT", "1");
	print_row("JULIA", "2");
	print_row("BURNING SHIP", "3");
	print_row("REINICIAR", "ESPACIO");
	print_line();
	print_row("SALIR", "ESCAPE");
	ft_printf("%s┗━━━━━━━━━━━━━━━━━━━━┷━━━━━━━━━━━━━━━━━━━━━┛%s\n", GRAY, RESET);
}

static void	print_row(char *text, char *key)
{
	ft_printf("%s┃ %s%18s %s│%s %-19s %s┃%s\n",
		GRAY, RESET, text, GRAY, RESET, key, GRAY, RESET);
}

static void	print_line(void)
{
	ft_printf("%s┠────────────────────┼─────────────────────┨%s\n",
		GRAY, RESET);
}
