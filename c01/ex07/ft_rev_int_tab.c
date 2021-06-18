void	ft_rev_int_tab(int *tab, int size)
{
	int	box;
	int	i;

	i = 0;
	size--;
	while (i < size)
	{
		box = tab[i];
		tab[i] = tab[size];
		tab[size] = box;
		i++;
		size--;
	}
}

