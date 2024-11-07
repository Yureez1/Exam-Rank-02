#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	len;
	int	*arr;
	int	i;

	if (start <= end)
		len = end - start + 1; // Count from start to end
	else
		len = start - end + 1; // Count from end to start
	arr = (int *)malloc(sizeof(int) * len);
	if (!arr) // Return NULL if memory allocation fails
		return (NULL);
	i = 0;
	while (i < len)
	{
		arr[i] = start;
		if (start < end)
			start++;
		else
			start--;
		i++;
	}
	return (arr);
}
