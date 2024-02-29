#include<unistd.h>

char *ft_itoa(int nbr)
{
	long nb = nbr;
	long nb2 = nbri;
	long len = 0;

	if (nb <= 0)
		len++;
	while (nb2)
	{
		nb2 = nb2 / 10;
		len++;
	}
	char *res = malloc(sizeof(char) * 100);
	if (res == NULL)
		return (0);
	res[len] = '\0';
	if (nb == 0)
	{
		res[0] = '0';
		return(res);
	}
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	while (nb)
	{
		len--;
		res[len] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (res);
}
