#include "library.h"

int	ft_rules_2(int grid, int **table)
{
	int	x;
	int	y;

	x = 0;
	while (x <= grid + 1)
	{
		y = 0;
		while (y <= grid + 1)
		{
			ft_rules_2_calcul_row(grid, x, y, table);
			ft_rules_2_calcul_col(grid, x, y, table);
			y++;
		}
		x++;
	}
	ft_rules_3(grid, table);
	return (0);
}

int	ft_rules_2_calcul_row(int grid, int x, int y, int **table)
{
	if (x >= 1 && x <= grid && y >= 1 && y <= grid)
	{
		if (table[x][y] == 0)
		{
			if ((table[x][0] == 2) && (table[x][grid + 1] == 1) && (y == 1))
			{
				table[x][y] = 3;
				return (0);
			}
			if ((table[x][0] == 1) && (table[x][grid + 1] == 2) && (y == grid))
			{
				table[x][y] = 3;
				return (0);
			}
			if ((table[x - 1][y] != 0) && (table[0][y] == 2) && (x == 2)
				&& (table[3][y] != 4) && (table[4][y] != 4))
			{
				table[x][y] = 4;
				return (0);
			}
		}
	}
	return (0);
}

int	ft_rules_2_calcul_col(int grid, int x, int y, int **table)
{
	if (x >= 1 && x <= grid && y >= 1 && y <= grid)
	{
		if (table[x][y] == 0)
		{
			if ((table[0][y] == 2) && (table[grid + 1][y] == 1) && (x == 1))
			{
				table[x][y] = 3;
				return (0);
			}
			if ((table[0][y] == 1) && (table[grid + 1][y] == 2) && (x == grid))
			{
				table[x][y] = 3;
				return (0);
			}
		}
	}
	return (0);
}
