/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:46:24 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/27 11:48:18 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	k;

	destlen = 0;
	srclen = 0;
	k = 0;
	while (dest[destlen] != '\0')
		destlen++;
	while (src[srclen])
		srclen++;
	if (destlen >= size)
		return (srclen + size);
	else
		srclen = srclen + destlen;
	while (src[k] != '\0' && (k + destlen + 1) < size)
	{
		dest[destlen + k] = src[k];
		k++;
	}
	dest[destlen + k] = '\0';
	return (srclen);
}
