#include <stdlib.h>
int *ft_range(int min, int max)
{
	int	*array;
	int	size;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	array = malloc(size * sizeof(int));
	if (array == 0)
		return (0);
	i = -1;
	while (++i < size)
		array[i] = min + i;
	return (array);
}