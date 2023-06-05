/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cx_set.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:49:39 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/18 18:24:27 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/complex.h"

void	cx_set(t_complex *cx, double real, double img)
{
	if (cx)
	{
		cx->r = real;
		cx->i = img;
	}
}
