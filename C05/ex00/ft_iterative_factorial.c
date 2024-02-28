/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:46:53 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/22 11:18:12 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (1 < nb)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}
/*#include<stdio.h>
int	main()
{
	printf("%d", ft_iterative_factorial(3));
}*/
