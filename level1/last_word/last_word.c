/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:15:07 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/28 11:42:11 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	i;

	i = ft_strlen(av[1]) - 1;
	if (ac == 2)
	{
		while (av[1][i] == 32)
			i--;
		while (av[1][i] != 32)
		{
			i--;
		}
		if (av[1][i] == 32)
			i++;
		while (av[1][i] != 32 && av[1][i])
			ft_putchar(av[1][i++]);
	}
	ft_putchar('\n');
}
