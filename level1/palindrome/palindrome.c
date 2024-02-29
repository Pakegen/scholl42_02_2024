/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palindrome.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:32:05 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/26 14:09:05 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int	ft_palindrome(char *str)
{
	int	i;
	int	j;

	i = ft_strlen(str) - 1;
	j = 0;
	if (str[j] == '\0')
		return (0);
	while (str[j])
	{
		if (str[j] != str[i])
			return (0);
		i--;
		j++;
	}
	return (1);
}

int	number_space(char *str)
{
	int	i;
	int	space;

	i = 0;
	space = 0;
	while(str[i])
	{
		if (str[i] == 32)
			space++;
		i++;
	}
	return(space);
}

char    *ft_strcpy(char *dest, char *src)
{
    int    i;
    int    k;

    i = 0;
    k = 0;
    while (src[k] != '\0')
    {
        while (src[k] == 32)
            k++;
        dest[i] = src[k];
        i++;
        k++;
    }
    dest[i] = '\0';
    return (dest);
}

char	*ft_delete_space(char *str)
{
	int	i;
	int	k;
	int	space;
	char		*dest;
	
	i = 0;
	k = ft_strlen(str);
	space = number_space(str);
	dest = malloc(sizeof(char) * (k + space + 1));
	if (dest == NULL)
		return (0);
	ft_strcpy(dest, str);
	return(dest);
}

int	main(int ac, char **av)
{
	if (ac >= 2)
	{
		if (ft_palindrome(ft_delete_space(av[1])) == 1)
			ft_putchar('1');
		else
			ft_putchar('0');
	}
}
