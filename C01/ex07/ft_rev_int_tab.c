/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:28:14 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/13 13:43:56 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	place;

	place = 0;
	while (place < size / 2)
	{
		tmp = tab[place];
		tab[place] = tab[size - 1 - place];
		tab[size - 1 - place] = tmp;
		place++;
	}
}
