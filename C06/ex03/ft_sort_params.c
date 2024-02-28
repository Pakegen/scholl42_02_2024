/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:58:26 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/25 14:22:59 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] == s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_sort_params(char **av, int ac)
{
	char	*temp;
	int		i;
	int		k;

	i = 1;
	while (i < ac)
	{
		k = i + 1;
		if (k < ac && ft_strcmp(av[i], av[k]) > 0)
		{
			temp = av[i];
			av[i] = av[k];
			av[k] = temp;
			i = 1;
		}
		else
			i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	ft_sort_params(av, ac);
	while (i < ac)
	{
		ft_putstr(av[i]);
		i++;
	}
}
