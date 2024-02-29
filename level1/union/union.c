/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:50:30 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/27 18:12:47 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_union(char *s1, char *s2)
{
	char alpha[256];
	int	index;

	index = 0;
	while (index < 256)
	{
		alpha[index] = 0;
		index++;
	}
	while (*s1)
	{
		if (alpha[(unsigned char) *s1] == 0)
			ft_putchar(*s1);
		alpha[(unsigned char) *s1] = 1;
		s1++;
	}
	while (*s2)
	{
		if (alpha[(unsigned char) *s2] == 0)
			ft_putchar(*s2);
		alpha[(unsigned char) *s2] = 1;
		s2++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1], av[2]);
	}
	ft_putchar('\n');
}
