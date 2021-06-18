#include "library.h"

int	ft_rules_5(int grid, int **table)
{
	int	x;
	int	y;

	x = 0;
	while (x <= grid + 1)
	{
		y = 0;
		while (y <= grid + 1)
		{
			ft_rules_5_calcul_row(grid, x, y, table);
			ft_rules_5_calcul_col(grid, x, y, table);
			y++;
		}
		x++;
	}
	ft_check_final(grid, table);
	return (0);
}

int	ft_rules_5_calcul_row(int grid, int x, int y, int **table)
{
	if (x >= 1 && x <= grid && y >= 1 && y <= grid)
	{
		if (table[x][y] == 0)
		{
			if ((table[x][1] + table[x][2] + table[x][3] + table[x][4]) == 8)
			{
				table[x][y] = 2;
				return (0);
			}
		}
	}
	return (0);
}

int	ft_rules_5_calcul_col(int grid, int x, int y, int **table)
{
	if (x >= 1 && x <= grid && y >= 1 && y <= grid)
	{
		if (table[x][y] == 0)
		{
			if ((table[1][y] + table[2][y] + table[3][y] + table[4][y]) == 8)
			{
				table[x][y] = 2;
				return (0);
			}
		}
	}
	return (0);
}
