/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pt_create.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:31:29 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/18 18:11:22 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/point.h"

t_point	*pt_create(void)
{
	t_point		*pt;

	pt = malloc(sizeof(t_point));
	if (pt)
	{
		pt->x = 0;
		pt->y = 0;
		pt->c = cx_create(0.0, 0.0);
		pt->z = cx_create(0.0, 0.0);
		pt->z2 = cx_create(0.0, 0.0);
		if (!pt->c || !pt->z || !pt->z2)
			pt_destroy(&pt);
	}
	return (pt);
}
