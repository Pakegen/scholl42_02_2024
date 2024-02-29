/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:36:32 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/27 15:53:43 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
void	ft_wdmatch(char *s1, char *s2)
{
	char alpha[256];
	int	index;

	index = 0;
	while (index < 256)
		alpha[index++] = 0;
	while (*s2)
	{
		alpha[(unsigned char)*s2] = 1;
		s2++;
	}
	index = 0;
	while (s1[index] && alpha[(unsigned char)s1[index]])
		index++;
	if (!s1[index])
		putstr(s1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_wdmatch(av[1], av[2]);
	}
	ft_putchar('\n');
}
