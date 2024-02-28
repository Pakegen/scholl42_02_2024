/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:20:24 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/14 12:36:02 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	while (dest[k] && k < size)
	{
		dest[k] = src[k];
		k++;
	}
	if (size != 0)
	{
		dest[k] = '\0';
	}
	return (i);
}
