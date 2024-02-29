/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:48:34 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/28 11:14:03 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 && str[i] != '\0')
	{
		i++;
	}
	while (str[i] != '\0' && str[i] != ' ')
		ft_putchar(str[i++]);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putstr(av[1]);
	}
	ft_putchar('\n');
}
