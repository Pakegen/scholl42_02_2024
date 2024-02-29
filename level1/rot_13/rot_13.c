/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:43:42 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/28 15:04:48 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'M')
			str[i] = str[i] + 13;
		else if (str[i] >= 'a' && str[i] <= 'm')
			str[i] = str[i] + 13;
		else if (str[i] >= 'n' && str[i] <= 'z')
			str[i] = str[i] - 13;
		else if (str[i] >= 'N' && str[i] <= 'Z')
			str[i] = str[i] - 13;
		i++;
	}
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		rot_13(av[1]);
		putstr(av[1]);
	}
	ft_putchar('\n');
}
