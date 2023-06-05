/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cx_create.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:50:32 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/18 14:35:32 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/complex.h"

t_complex	*cx_create(double real, double img)
{
	t_complex	*cx;

	cx = malloc(sizeof(t_complex));
	if (cx)
	{
		cx->r = real;
		cx->i = img;
	}
	return (cx);
}
