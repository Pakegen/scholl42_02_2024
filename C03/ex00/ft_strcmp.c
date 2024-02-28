/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:39:07 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/14 16:09:04 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>

int    ft_strcmp(char *s1, char *s2);

int    main(void)
{
    char s1[] = "Test1";
    char s2[] = "OK";
    char s3[] = "Same";
    char s4[] = "Size";
    char s5[] = "Shorter";
    char s6[] = "ThanMyself";

    printf("%d, %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
    printf("%d, %d\n", ft_strcmp(s3, s4), strcmp(s3, s4));
    printf("%d, %d\n", ft_strcmp(s5, s6), strcmp(s5, s6));
    printf("%d, %d\n", ft_strcmp(s5, s5), strcmp(s5, s5));
}*/
