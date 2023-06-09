/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ui_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:31:54 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/18 12:56:43 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

size_t	ft_ui_len(unsigned int number)
{
	size_t	count;

	count = 0;
	if (!number)
		count = 1;
	while (number)
	{
		number = number / 10;
		count++;
	}
	return (count);
}
