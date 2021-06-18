#include "library.h"

int	ft_rules_4(int grid, int **table)
{
	int	x;
	int	y;

	x = 0;
	while (x <= grid + 1)
	{
		y = 0;
		while (y <= grid + 1)
		{
			ft_rules_4_calcul_row(grid, x, y, table);
			ft_rules_4_calcul_col(grid, x, y, table);
			y++;
		}
		x++;
	}
	ft_rules_5(grid, table);
	return (0);
}

int	ft_rules_4_calcul_row(int grid, int x, int y, int **table)
{
	if (x >= 1 && x <= grid && y >= 1 && y <= grid)
	{
		if (table[x][y] == 0)
		{
			if ((table[x][y - 1] == 4) && (table[x][y - 2] == 3))
			{
				if (table[x][grid + 1] == 2)
				{
					table[x][y] = 1;
					table[x][y + 1] = 2;
					return (0);
				}
				else
				{
					table[x][y] = 2;
					table[x][y + 1] = 1;
					return (0);
				}
			}
		}
	}
	return (0);
}

int	ft_rules_4_calcul_col(int grid, int x, int y, int **table)
{
	if (x >= 1 && x <= grid && y >= 1 && y <= grid)
	{
		if (table[x][y] == 0)
		{
			if ((table[x - 1][y] == 4) && (table[x - 2][y] == 3))
			{
				if (table[grid + 1][y] == 2)
				{
					table[x][y] = 1;
					table[x + 1][y] = 2;
					return (0);
				}
				else
				{
					table[x][y] = 2;
					table[x + 1][y] = 1;
					return (0);
				}
			}
		}
	}
	return (0);
}
