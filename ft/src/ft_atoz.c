/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoz.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:34:08 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/18 12:56:03 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

size_t	ft_atoz(char *str)
{
	int		i;
	size_t	result;

	result = 0;
	i = 0;
	while (ft_is_digit(str[i]))
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result);
}
