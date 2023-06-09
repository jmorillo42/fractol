/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_char_rep.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:21:27 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/18 12:56:22 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

int	ft_put_char_rep(char c, size_t count)
{
	int	i;

	i = 0;
	while (i < (int)count)
	{
		if (write(1, &c, 1) < 0)
			return (-1);
		i++;
	}
	return (i);
}
