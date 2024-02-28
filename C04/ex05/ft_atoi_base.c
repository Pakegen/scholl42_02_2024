/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:03:09 by quenalla          #+#    #+#             */
/*   Updated: 2024/02/19 18:31:20 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int     check_base(char *base)
{
        int     i;
        int     n;

        i = 0;
        if (ft_strlen(base) < 2)
                return(0);
        while (base[i])
        {
                n = i;
                while(base[n])
                {
                        n++;
                        if (base[n] == base[i])
                                return(0);
                }
                if (base[i] <= 47 || base[i] >= 126
                        || (base[i] >= 60 && base[i] <= 64)
                        || (base[i] >= 91 && base[i] <= 96))
                                return(0);
                else
                        i++;
        }
        return(1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	neg;
	int	len;

	i = 0;
	res = 0;
	neg = 1;
	if(check_base == 1)
	{
		len = ft_strlen(base);
		while (str[i] == '+' && str[i] == '-')
		{
			if (str[i] == '-')
			{
				neg = -neg;
			}
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + str[i] - '0';
			i++;
		}
		return (res * neg);
	}
}
