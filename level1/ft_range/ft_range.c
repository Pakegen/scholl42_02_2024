/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:58:50 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/29 13:17:21 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int start, int end)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(sizeof(int) * 500);
	if (tab == NULL)
	{
		return (0);
	}
	if (end == start)
	{
		tab = malloc(sizeof(int));
		*tab = start;
		return(tab);
	}
	while (end >= start)
	{
		tab[i] = start;
		start++;
		i++;
	}
	while(end <= start)
	{
		tab[i] = start;
		start--;
		i++;
	}
	return (tab);
}

#include<stdio.h>

int	main()
{
	int	i = 0;
	int	start = -20;
	int	end = 5;
	int	*tab = ft_range(start, end); 
	while (i <= 27)
	{
		printf("%d", tab[i]);
		printf("\n");
		i++;
	}
}
