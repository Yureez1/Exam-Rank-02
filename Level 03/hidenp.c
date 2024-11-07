#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	char *s1 = argv[1];
	char *s2 = argv[2];
	int i = 0; // Index for s1
	while (*s2)
	{
		if (*s2 == s1[i])
		{
			i++;
		}
		if (s1[i] == '\0')
		{
			write(1, "1\n", 2);
			return (0);
		}
		s2++;
	}
	write(1, "0\n", 2);
	return (0);
}