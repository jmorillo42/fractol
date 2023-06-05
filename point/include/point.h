/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:32:24 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/18 18:37:54 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include "../../complex/include/complex.h"

typedef struct s_point
{
	int			x;
	int			y;
	t_complex	*c;
	t_complex	*z;
	t_complex	*z2;
}	t_point;

t_point	*pt_create(void);
void	pt_destroy(t_point **pt);

#endif
