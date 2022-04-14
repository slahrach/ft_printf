/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_base10.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:10:16 by slahrach          #+#    #+#             */
/*   Updated: 2021/12/09 00:07:30 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count(long n)
{
	int	r;

	r = 1;
	if (n < 0)
	{
		r++;
		n *= -1;
	}
	while (n > 9)
	{
		r++;
		n /= 10;
	}
	return (r);
}

int	aff_base10(int n)
{
	int		a;
	long	nbr;

	nbr = n;
	a = count(nbr);
	if (nbr < 0)
	{
		aff_char('-');
		nbr *= -1;
	}
	if (nbr < 10)
		aff_char(nbr + '0');
	else
	{
		aff_base10(nbr / 10);
		aff_char((nbr % 10) + '0');
	}
	return (a);
}
/*
int main()
{
	//aff_base10(2147483649);
	printf("%d", 2147483649);
}*/
