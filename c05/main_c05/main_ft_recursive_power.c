#include <stdio.h>
int ft_recursive_power(int nb, int power);

int main(void)
{
	int nb;
	int power;

	nb = 3;
	power = 4;
	//ft_recursive_power(nb, power);
	printf("%d^%d é %d\n", nb, power, ft_recursive_power(nb, power));
	return (0);
}