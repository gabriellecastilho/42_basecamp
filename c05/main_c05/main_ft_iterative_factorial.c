#include <stdio.h>
int ft_iterative_factorial(int nb);

int main (void)
{
	int n;
	n = 5;
	//ft_iterative_factorial(n);
	printf("%d! é %d", n, ft_iterative_factorial(n));
	return (0);
}