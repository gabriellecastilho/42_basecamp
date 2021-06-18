#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);

int	main (void)
{
	int	a;
	int	b;

	a = 42;
	b = 4;
	ft_ultimate_div_mod(&a, &b);
	printf("div é %d e mod é %d", a, b);
}
