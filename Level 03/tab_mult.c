#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

void	tab_mult(int num)
{
	int	i;

	i = 1;
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(num);
		write(1, " = ", 3);
		ft_putnbr(i * num);
		write(1, "\n", 1);
		i++;
	}
}

int	ft_atoi(const char *str)
{
	int	res;

	res = 0;
	while (*str)
		res = res * 10 + (*str++ - '0');
	return (res);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	tab_mult(ft_atoi(argv[1]));
	return (0);
}
