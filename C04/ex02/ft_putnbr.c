/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:42:43 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/20 14:09:39 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int long	nbr;
	int long	diviser;

	nbr = nb;
	diviser = 1;
	if (nbr == 0)
	{
		return (ft_putchar('0'));
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	while (diviser <= nbr)
		diviser = diviser * 10;
	while (diviser > 1)
	{
		diviser = diviser / 10;
		ft_putchar(nbr / diviser + '0');
		nbr = nbr % diviser;
	}
}
