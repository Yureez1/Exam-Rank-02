#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	if (nbr == -2147483648)
		return ("-2147483648");
	int nb = nbr;
	int len = 0;
	if (nbr <= 0)
		len++;
	while (nb)
	{
		nb /= 10;
		len++;
	}
	char *str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
