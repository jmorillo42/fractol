/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:47:58 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/20 23:14:07 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

static char	get_fractal_type(char *str);

void	read_args(int argc, char **argv, char *f_type, t_complex **c)
{
	*f_type = '\0';
	*c = cx_create(0.0, 0.0);
	if (!(*c))
		return ;
	if (argc == 2)
		*f_type = get_fractal_type(argv[1]);
	else if (argc == 4 && ft_is_float(argv[2]) && ft_is_float(argv[3]))
	{
		*f_type = get_fractal_type(argv[1]);
		if (*f_type == JULIA)
		{
			(*c)->r = ft_atof(argv[2]);
			(*c)->i = ft_atof(argv[3]);
		}
		else
			*f_type = '\0';
	}
	if (!(*f_type))
		cx_destroy(c);
}

static char	get_fractal_type(char *str)
{
	ft_toupper(str);
	while ((*str == 32 || (*str >= 9 && *str <= 13)))
		str++;
	if (!ft_strcmp(str, "MANDELBROT"))
		return (MANDELBROT);
	else if (!ft_strcmp(str, "JULIA"))
		return (JULIA);
	else if (!ft_strcmp(str, "SHIP"))
		return (BURNING_SHIP);
	return ('\0');
}
