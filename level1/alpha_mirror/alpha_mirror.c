/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:28:40 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/28 16:15:38 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void alpha_mirror(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'A' - str[i] + 'Z';
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'a' - str[i] + 'z';
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
		alpha_mirror(av[1]);
		putstr(av[1]);
	}
	ft_putchar('\n');
}
