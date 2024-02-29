/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:45:18 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/29 12:50:31 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	long nb;
	long diviser;

	nb = nbr;
	diviser = 1;
	if (nb == 0)
		ft_putchar(return ('0'));
	if (nb < 0)
		nb = -nb;
	while (diviser <= nb)
		diviser = diviser * 10;
	while (diviser > 1)
	{
		diviser = diviser / 10;
		ft_putchar(nb / diviser + '0');
		nb = nb % diviser;
	}
}
