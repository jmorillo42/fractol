/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:11:58 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/24 11:36:57 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

#define ZERO '0'

static int	ft_is_space(char c);
static void	ft_mantise(char **str, double *mantise, double sign);

double	ft_atof(char *str)
{
	double	sign;
	double	result;

	sign = 1.0;
	result = 0.0;
	while (ft_is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1.0;
		str++;
	}
	while (ft_is_digit(*str))
	{
		result = result * 10 + (*str - ZERO) * sign;
		str++;
	}
	ft_mantise(&str, &result, sign);
	while (ft_is_space(*str))
		str++;
	if (*str)
		return (0.0);
	else
		return (result);
}

static int	ft_is_space(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

static void	ft_mantise(char **str, double *number, double sign)
{
	double	decimal;
	char	*str_aux;

	str_aux = *str;
	if (*str_aux == '.')
		str_aux++;
	decimal = 10.0;
	while (ft_is_digit(*str_aux))
	{
		*number += (*str_aux - ZERO) * sign / decimal;
		decimal *= 10.0;
		str_aux++;
	}
	*str = str_aux;
}
