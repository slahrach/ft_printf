/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_base10.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:10:16 by slahrach          #+#    #+#             */
/*   Updated: 2022/05/12 16:49:29 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	aff_base10(int n)
{
	int		a;
	long	nbr;

	nbr = n;
	a = 0;
	if (nbr < 0)
	{
		a += aff_char('-');
		nbr *= -1;
	}
	if (nbr < 10)
		a += aff_char(nbr + '0');
	else
	{
		a += aff_base10(nbr / 10);
		a += aff_char((nbr % 10) + '0');
	}
	return (a);
}
/*
int main()
{
	//aff_base10(2147483649);
	printf("%d", 2147483649);
}*/
