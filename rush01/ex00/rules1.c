#include "library.h"

int	ft_rules_1(int grid, int **table)
{
	int	x;
	int	y;

	x = 0;
	while (x <= grid + 1)
	{
		y = 0;
		while (y <= grid + 1)
		{
			ft_rules_1_up(grid, x, y, table);
			ft_rules_1_down(grid, x, y, table);
			ft_rules_1_left(grid, x, y, table);
			ft_rules_1_right(grid, x, y, table);
			y++;
		}
		x++;
	}
	ft_rules_2(grid, table);
	return (0);
}

int	ft_rules_1_up(int grid, int x, int y, int **table)
{
	if (x == 0 && y >= 1 && y <= (grid + 1))
	{
		if (table[x + 0][y] == 4)
		{
			table[x + 1][y] = 1;
			table[x + 2][y] = 2;
			table[x + 3][y] = 3;
			table[x + 4][y] = 4;
		}
		if (table[x + 0][y] == 1)
			table[x + 1][y] = 4;
		if (table[x + 0][y] == 2 && table[x + grid + 1][y] == 3)
			table[x + 2][y] = 4;
	}
	return (0);
}

int	ft_rules_1_down(int grid, int x, int y, int **table)
{
	if (x == (grid + 1) && y >= 1 && y <= (grid + 1))
	{
		if (table[x - 0][y] == 4)
		{
			table[x - 1][y] = 1;
			table[x - 2][y] = 2;
			table[x - 3][y] = 3;
			table[x - 4][y] = 4;
		}
		if (table[x - 0][y] == 1)
			table[x - 1][y] = 4;
		if (table[x - 0][y] == 2 && table[0][y] == 3)
			table[x - 2][y] = 4;
	}
	return (0);
}

int	ft_rules_1_left(int grid, int x, int y, int **table)
{
	if (y == 0 && x >= 1 && x <= (grid + 1))
	{
		if (table[x][y + 0] == 4)
		{
			table[x][y + 1] = 1;
			table[x][y + 2] = 2;
			table[x][y + 3] = 3;
			table[x][y + 4] = 4;
		}
		if (table[x][y + 0] == 1)
			table[x][y + 1] = 4;
		if (table[x][y + 0] == 2 && table[x][y + grid + 1] == 3)
			table[x][y + 2] = 4;
	}
	return (0);
}

int	ft_rules_1_right(int grid, int x, int y, int **table)
{
	if (y == (grid + 1) && x >= 1 && x <= (grid + 1))
	{
		if (table[x][y - 0] == 4)
		{
			table[x][y - 1] = 1;
			table[x][y - 2] = 2;
			table[x][y - 3] = 3;
			table[x][y - 4] = 4;
		}
		if (table[x][y - 0] == 1)
			table[x][y - 1] = 4;
		if (table[x][y - 0] == 2 && table[x][0] == 3)
			table[x][y - 2] = 4;
	}
	return (0);
}
