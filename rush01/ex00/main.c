#include "library.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_remove_space (char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while ((str[j]) && j >= 0)
	{
		str[i] = str[j];
		i++;
		j = j + 2;
	}
	str[i] = '\0';
}

int	**ft_create_table (int grid, char *str)
{
	int	i;
	int	j;
	int	**table;

	table = (int **)malloc(sizeof(int *) * grid + 2);
	i = 0;
	while (i < grid + 2)
	{
		table[i] = (int *)malloc(sizeof(int) * grid + 2);
		i++;
	}
	i = -1;
	j = -1;
	while (i++ < grid + 2)
	{
		while (j++ < grid + 2)
		{
			table[i][j] = 0;
		}
	}
	ft_fill_borders(grid, str, table);
	return (table);
}

int	ft_fill_borders(int grid, char *str, int **table)
{
	int	i;

	i = 1;
	while (i <= grid)
	{
		table[0][i] = str[i - 1] - '0';
		table[grid + 1][i] = str[i + 3] - '0';
		table[i][0] = str[i + 7] - '0';
		table[i][grid + 1] = str[i + 11] - '0';
		i++;
	}
	ft_rules_1(grid, table);
	return (0);
}

int	main(int argc, char **argv)
{
	int	grid;

	grid = 4;
	ft_check_error(argc, argv[1], grid);
	return (0);
}
