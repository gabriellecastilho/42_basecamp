void	ft_sort_int_tab(int *tab, int size)
{
	int	box;
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			box = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = box;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
