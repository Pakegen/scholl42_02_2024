/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:52:52 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/22 11:17:52 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 1)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*#include<stdio.h>
int	main()
{
	printf("%d", ft_recursive_factorial(7));
}*/
