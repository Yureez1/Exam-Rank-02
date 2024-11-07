#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	if (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

int	is_prime(int nbr)
{
	int	i;

	i = 2;
	if (nbr <= 1)
		return (0);
	while (i * i <= nbr)
	{
		if ((nbr % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	sum;
	int	nbr;

	sum = 0;
	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		while (nbr > 0)
		{
			if (is_prime(nbr))
				sum += nbr;
			nbr--;
		}
		ft_putnbr(sum);
	}
	write(1, "\n", 1);
	return (0);
}
