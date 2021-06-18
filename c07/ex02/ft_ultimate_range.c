#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int *table;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	table = malloc(size * sizeof(*range));
	if (table == 0)
		return (-1);
	i = -1;
	while (++i < size)
		table[i] = min + i;
	*range = table;
	return (i);
}