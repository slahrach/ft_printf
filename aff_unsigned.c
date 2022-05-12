/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_unsigned.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:41:54 by slahrach          #+#    #+#             */
/*   Updated: 2022/05/12 16:52:54 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	aff_unsigned(unsigned int nbr)
{
	int		a;

	a = 0;
	if (nbr < 10)
		a += aff_char(nbr + '0');
	else
	{
		a += aff_unsigned(nbr / 10);
		a += aff_char((nbr % 10) + '0');
	}
	return (a);
}
