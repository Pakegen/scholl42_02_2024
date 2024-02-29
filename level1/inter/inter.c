/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:38:43 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/28 12:36:27 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	inter(char *s1, char *s2)
{
	char alpha[256];
	int index;

	index = 0;
	while (index < 256)
	{
		alpha[index] = 0;
		index++;
	}
	while (*s2)
	{
		if (alpha[(unsigned char) *s2] == 0)
			alpha[(unsigned char) *s2] = 1;
		s2++;
	}
	while (*s1)
	{
		if (alpha[(unsigned char) *s1] == 1)
			ft_putchar(*s1);
		s1++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		inter(av[1], av[2]);
	}
	ft_putchar('\n');
}
