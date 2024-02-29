/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:23:01 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/26 16:38:18 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'z' || str[i] == 'Z')
			str[i] = str[i] - 25;
		else if (str[i] >= 'A' && str[i] <= 'Y')
			str[i] = str[i] + 1;
		else if (str[i] >= 'a' && str[i] <= 'y')
			str[i] = str[i] + 1;
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		rotone(av[1]);
		putstr(av[1]);
	}
}
