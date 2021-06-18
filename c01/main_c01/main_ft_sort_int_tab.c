#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size);

int	main (void)
{
	int	abc[] = {20, 50, 30, 40, 10};

	ft_sort_int_tab(abc, 5);
	printf("%d", abc[0]);
	printf("%d", abc[1]);
	printf("%d", abc[2]);
	printf("%d", abc[3]);
	printf("%d", abc[4]);
	return (0);
}
