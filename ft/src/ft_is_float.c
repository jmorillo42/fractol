/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_float.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:55:05 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/24 11:36:45 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

#define ZERO '0'

static int	ft_is_space(char c);

int	ft_is_float(char *str)
{
	int	has_digits;

	has_digits = 0;
	while (ft_is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
		str++;
	has_digits = ft_is_digit(*str);
	while (ft_is_digit(*str))
		str++;
	if (*str == '.')
		str++;
	has_digits = (has_digits || ft_is_digit(*str));
	while (ft_is_digit(*str))
		str++;
	while (ft_is_space(*str))
		str++;
	return (has_digits && !*str);
}

static int	ft_is_space(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}
