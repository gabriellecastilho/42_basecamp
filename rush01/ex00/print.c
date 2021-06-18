#include "library.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_print_table(int **table, int grid)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i >= 1 && i <= grid)
	{
		while (j >= 1 && j <= grid)
		{
			ft_putchar(table[i][j] + '0');
			if (j >= 1 && j < grid)
				ft_putchar(' ');
			if (j == grid)
				ft_putchar('\n');
			j++;
		}
		j = 1;
		i++;
	}
	free(table);
	return (0);
}
