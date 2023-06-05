/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_padding.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:45:08 by jmorillo          #+#    #+#             */
/*   Updated: 2022/11/18 12:57:23 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	print_padding(t_fmt_text *ftext, size_t length)
{
	char	pad_char;

	if (!length)
		return ;
	if (ftext->zero_flag && !ftext->minus_flag)
		pad_char = '0';
	else
		pad_char = ' ';
	update_count(ftext, ft_put_char_rep(pad_char, length));
}
