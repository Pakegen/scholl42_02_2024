/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:19:51 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/29 13:35:11 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	i;
	int	*dest;

	i = 0;
	dest = malloc(sizeof(int) * 100);
	if (dest == NULL)
		return (0);
	if (start == end)
	{
		*dest = start;
		return (dest);
	}
	while (end >= start)
	{
		dest[i] = end;
		end--;
		i++;
	}
	while (end <= start)
	{
		dest[i] = end;
		end++;
		i++;
	}
	return(dest);
}

#include <stdio.h>

int	main()
{
	int	i = 0;
	int start = 10;
	int  end = -10;
	int	*tab = ft_rrange(start, end);
	while (i < 6)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
