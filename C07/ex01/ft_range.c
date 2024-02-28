/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:58:19 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/26 17:15:07 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;

	i = 0;
	if (min >= max)
		return (0);
	res = malloc(sizeof(int) * (max - min));
	if (res == NULL)
		return (0);
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}
