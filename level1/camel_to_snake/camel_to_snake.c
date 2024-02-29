/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:41:22 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/28 17:36:56 by quenalla         ###   ########.fr       */
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

int     ft_seplen(char *str)
{
        int     i;
        int     k;

        i = 0;
        k = 0;
        while (str[i])
        {
                if (str[i] >= 'A' && str[i] <= 'Z')
                        k++;
                i++;
        }
        return (k);
}

char	*cpy(char *s1, char *s2, char *s3)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	j = 0;
	while (!(s2[i] >= 'A' && s2[i] <= 'Z') && s2[i])
	{
		s1[j] = s2[i];
		i++;
		j++;
		if (!(s2[i] >= 'a' && s2[i] <= 'z') && s2[i])
		{
			k = 0;
			if (s2[i] >= 'A' && s2[i] <= 'Z' && s2[i])
				s2[i] = s2[i] + 32;
			while (s3[k])
			{
				s1[j] = s3[k];
				k++;
				j++;
			}
		}
	}
	s1[j] = '\0';
	return (s1);
}

char	*ft_camel_to_snake(char *str, char *sep)
{
	char 	*dest;

	dest = malloc(sizeof(char) * ft_strlen(str) + ft_seplen(str) + 1);
	if (dest == NULL)
		return (0);
	cpy(dest, str, sep);
	return(dest);
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i++]);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		char sep[] = "_";
		putstr(ft_camel_to_snake(av[1], sep));
	}
	ft_putchar('\n');
}
