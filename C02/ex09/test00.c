/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:47:16 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/14 12:12:11 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcapitalize(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                if (str[i] >= 'A' && str[i] <= 'Z')
                        str[i] = str[i] + 32;
                i++;
        }
        i = 0;
        while (str[i] != '\0')
        {
                if (str[i] >= 'a' && str[i] <= 'z' && i == 0)
                        str[i] = str[i] - 32;
                if ((str[i] >= 'a' && str[i] <= 'z')    
                        && (str[i - 1] < 48 || (str[i - 1] >= 58 && str[i - 1] <= 64)
                                || (str[i - 1] >= 91 && str[i - 1] <= 96)
                                || (str[i - 1] > 122)))
                                                str[i] = str[i] - 32;
                i++;
        }
        return (str);
}

#include <unistd.h>

char    *ft_strcapitalize(char *src);

void    ft_putstr(char *str)
{
    int l;

    l = 0;
    while (str[l])
    {
        l++;
    }
    write(1, str, l);
}

int        main()
{
    char c[] = "{salut, com1men 1h }a ]e GGG ";
    ft_putstr(" Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un:");
    ft_putstr(ft_strcapitalize(c));
    ft_putstr(":");
    ft_putstr(c);
}
