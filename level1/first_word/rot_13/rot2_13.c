/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot2_13.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:02:27 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/26 16:44:21 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'N') || (str[i] >= 'a' && str[i] <= 'n'))
			str[i] = str[i] + 13;
		else if ((str[i] >= 'M' && str[i] <= 'Z') || (str[i] >= 'm' && str[i] <= 'z'))
			str[i] = str[i] - 13;
		i++;
	}
}

void	pustr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		rot(av[1]);
		pustr(av[1]);
	}
	ft_putchar('\n');
}
