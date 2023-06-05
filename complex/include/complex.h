/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:50:35 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/18 18:24:40 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPLEX_H
# define COMPLEX_H

# include <stdlib.h>

typedef struct s_complex
{
	double	r;
	double	i;
}	t_complex;

t_complex	*cx_create(double real, double img);
void		cx_destroy(t_complex **cx);
void		cx_set(t_complex *cx, double real, double img);

#endif
