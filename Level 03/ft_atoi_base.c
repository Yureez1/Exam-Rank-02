#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	result;
	int	value;

	i = 0;
	sign = 1;
	result = 0;
	if (str_base < 2 || str_base > 16)
		return (0);
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			value = str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			value = str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			value = str[i] - 'A' + 10;
		else
			break ;
		if (value >= str_base)
			break ;
		result = result * str_base + value;
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	// Test with invalid base 0
	printf("Testing with base 0 (should be invalid):\n");
	printf("Input: \"123\" with base 0 => Result: %d\n\n", ft_atoi_base("123",
			0));
	// Additional test cases
	printf("Other test cases:\n");
	printf("Input: \"101\" in base 2 => Result: %d\n", ft_atoi_base("101", 2));
	printf("Input: \"-101\" in base 2 => Result: %d\n", ft_atoi_base("-101",
			2));
	printf("Input: \"123\" in base 10 => Result: %d\n", ft_atoi_base("123",
			10));
	printf("Input: \"7B\" in base 16 => Result: %d\n", ft_atoi_base("7B", 16));
	printf("Input: \"FF\" in base 16 => Result: %d\n", ft_atoi_base("FF", 16));
	printf("Input: \"755\" in base 8 => Result: %d\n", ft_atoi_base("755", 8));
	return (0);
}
