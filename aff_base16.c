/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_base16.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 02:53:26 by slahrach          #+#    #+#             */
/*   Updated: 2022/05/12 16:50:50 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	aff_base16(unsigned int nbr, char la)
{
	int		r;
	char	*str;

	r = 0;
	if (la == 'x')
		str = "0123456789abcdef";
	else if (la == 'X')
		str = "0123456789ABCDEF";
	if (nbr < 16)
		r += aff_char(str[nbr]);
	else
	{
		r += aff_base16((nbr / 16), la);
		r += aff_char(str[nbr % 16]);
	}
	return (r);
}
