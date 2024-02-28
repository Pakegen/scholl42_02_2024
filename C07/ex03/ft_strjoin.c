/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:40:19 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/25 15:55:02 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	lenstrs(char **strs, int size)
{
	int	i;
	int	add;

	i = 0;
	add = 0;
	while (i < size)
	{
		add = add + ft_strlen(strs[i]);
		i++;
	}
	return (add);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;

	i = 0;
	if (size == 0)
	{
		dest = malloc(1);
		*dest = '\0';
		return (dest);
	}
	dest = malloc(1 * (lenstrs(strs, size) + ft_strlen(sep) * (size - 1) + 1));
	if (dest == NULL)
		return (0);
	ft_strcpy(dest, strs[i++]);
	while (i < size)
	{
		ft_strcat(dest, sep);
		ft_strcat(dest, strs[i]);
		i++;
	}
	return (dest);
}
