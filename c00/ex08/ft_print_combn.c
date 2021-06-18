#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int nb, int *tab, int pos)
{
	int	i;

	if (pos == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	i = 0;
	while (i < nb)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

void	ft_print_combn_cont(int nb, int *tab)
{
	int	i;
	int	limit;

	i = nb - 1;
	limit = 9;
	while (tab[i] == limit)
	{
		i--;
		limit--;
	}
	tab[i]++;
	while (i < nb)
	{
		tab[i + 1] = tab[i] + 1;
		i++;
	}
}

void	ft_print_combn(int nb)
{
	int	tab[10];
	int	i;

	i = 0;
	while (i < nb)
	{
		tab[i] = i;
		i++;
	}
	ft_print_number(nb, tab, 0);
	while (tab[0] != 10 - nb || tab[nb - 1] != 9)
	{
		if (tab[nb - 1] != 9)
		{
			tab[nb - 1] += 1;
		}
		else
		{
			ft_print_combn_cont(nb, tab);
		}
		ft_print_number(nb, tab, 1);
	}
}
