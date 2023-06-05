/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pt_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:31:26 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/18 18:14:51 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/point.h"

void	pt_destroy(t_point **pt)
{
	if (*pt)
	{
		cx_destroy(&(*pt)->c);
		cx_destroy(&(*pt)->z);
		cx_destroy(&(*pt)->z2);
	}
	free(*pt);
	*pt = NULL;
}
