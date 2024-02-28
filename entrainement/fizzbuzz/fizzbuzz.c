/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:22:27 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/26 17:44:35 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	fizzbuzz(void)
{
	int	i;

	i = 1;
	while (i < 101)
	{
		if (i % 4 == 0 && i % 7 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 4 == 0)
			write(1, "fizz", 4);
		else if (i % 7 == 0)
			write(1, "buzz", 4);
		else if (i < 10)
			ft_putchar(i + '0');
		else
		{
			ft_putchar(i / 10 + '0');
			ft_putchar(i % 10 + '0');
		}
		i++;
		ft_putchar('\n');
	}
}

int	main(void)
{
	fizzbuzz();
}
