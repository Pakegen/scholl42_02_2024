/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:21:11 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/19 13:52:13 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		i = 0;
		k = 0;
		while (str[i] == to_find[k])
		{
			k++;
			if (to_find[k] == '\0')
				return (str);
			i++;
		}
		str++;
	}
	return (0);
}
