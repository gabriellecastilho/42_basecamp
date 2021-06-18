#include <stdio.h>
int ft_iterative_power(int nb, int power);

int main(void)
{
	int nb;
	int power;

	nb = 3;
	power = 4;
	//ft_iterative_power(nb, power);
	printf("%d^%d é %d\n", nb, power, ft_iterative_power(nb, power));
	return (0);
}