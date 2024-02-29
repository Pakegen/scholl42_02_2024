/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:45:37 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/27 17:00:14 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char  **av)
{
	int	i;
	int	k;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
					k = (av[1][i] - 96);
					while(k > 0)
					{
						ft_putchar(av[1][i]);
						k--;
					}
			}
			else
				ft_putchar(av[1][i]);
			i++;

		}
	}
	ft_putchar('\n');
}
