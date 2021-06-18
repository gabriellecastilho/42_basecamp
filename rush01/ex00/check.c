#include "library.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_check_error (int argc, char *str, int grid)
{
	if (argc < 2)
	{
		write(1, "Error\n", 7);
		return (0);
	}
	if (ft_check_parameters(str))
	{
		write(1, "Error\n", 7);
		return (0);
	}
	if (ft_create_table(grid, str) == 0)
	{
		write(1, "Error\n", 7);
		return (0);
	}
	return (0);
}

int	ft_check_parameters(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (i % 2 == 0 || i == 0)
		{
			if (!(str[i] >= '1' && str[i] <= '4'))
				return (1);
		}
		if (i % 2 == 1 || i == 1)
		{
			if (str[i] != ' ')
				return (1);
		}
		i++;
	}
	if (i != 31)
		return (1);
	i = 1;
	ft_remove_space(str);
	return (0);
}

int	ft_check_final(int grid, int **table)
{
	int	check;
	int	x;

	check = 0;
	x = 0;
	while (x <= 4)
	{
		if ((table[x][1] + table[x][2] + table[x][3] + table[x][4]) == 10)
			check = 1;
		else
		{
			check = 0;
			continue ;
		}
		x++;
	}
	if (check == 0)
		ft_rules_1(grid, table);
	ft_print_table(table, grid);
	return (0);
}
