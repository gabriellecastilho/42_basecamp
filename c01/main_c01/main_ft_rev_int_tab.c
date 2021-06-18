#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size);

int	main (void)
{
	int	tab[5] = {10, 20, 30, 40, 50};
	int	size;

	size = 5;
	ft_rev_int_tab(tab, size);
	printf("abc[0] é %d\n", tab[0]);
	printf("abc[1] é %d\n", tab[1]);
	printf("abc[2] é %d\n", tab[2]);
	printf("abc[3] é %d\n", tab[3]);
	printf("abc[4] é %d\n", tab[4]);
	return (0);
}
