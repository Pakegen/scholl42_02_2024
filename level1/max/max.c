/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:05:39 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/29 11:40:53 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int	max;

	i = 0;
	max = tab[len - 1];
	while (i != len)
	{
		if (tab[i] > max)
		{
			max = tab[i];
		}
		i++;
		if (i > len)
		{
			return (max);
		}
	}
	return (0);

}

#include<stdio.h>

int	main()
{
	int tab[] = { 30, 6, 15, 25, 2, 67, 78, 1};
	printf("%d", max(tab, 7));
}
