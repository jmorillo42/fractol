/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hsva_to_rgba.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:30:11 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/17 23:39:22 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	hsva_to_rgba(float h, float s, float v, unsigned char alpha)
{
	unsigned int	p;
	unsigned int	q;
	unsigned int	t;
	unsigned int	v_byte;

	if (h < 0 || h >= 360 || s < 0 || s > 1 || v < 0 || v > 1)
		return (0);
	h /= 60.0;
	p = (unsigned int)(v * (1.0 - s) * 255);
	q = (unsigned int)(v * (1.0 - (s * (h - (unsigned int)h))) * 255);
	t = (unsigned int)(v * (1.0 - (s * (1.0 - (h - (unsigned int)h)))) * 255);
	v_byte = (unsigned int)(v * 255);
	if (h < 1.0)
		return (v_byte << 24 | t << 16 | p << 8 | alpha);
	else if (h < 2.0)
		return (q << 24 | v_byte << 16 | p << 8 | alpha);
	else if (h < 3.0)
		return (p << 24 | v_byte << 16 | t << 8 | alpha);
	else if (h < 4.0)
		return (p << 24 | q << 16 | v_byte << 8 | alpha);
	else if (h < 5.0)
		return (t << 24 | p << 16 | v_byte << 8 | alpha);
	else
		return (v_byte << 24 | p << 16 | q << 8 | alpha);
}
