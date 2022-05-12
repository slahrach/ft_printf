/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_pointer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 04:23:40 by slahrach          #+#    #+#             */
/*   Updated: 2022/05/12 16:51:46 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	aff_base(unsigned long nbr)
{
	int		r;
	char	*str;

	r = 0;
	str = "0123456789abcdef";
	if (nbr < 16)
		r += aff_char(str[nbr]);
	else
	{
		r += aff_base(nbr / 16);
		r += aff_char(str[nbr % 16]);
	}
	return (r);
}

int	aff_pointer(void *ptr)
{
	int				r;
	unsigned long	nbr;

	nbr = (unsigned long)ptr;
	r = aff_str("0x");
	r += aff_base(nbr);
	return (r);
}
