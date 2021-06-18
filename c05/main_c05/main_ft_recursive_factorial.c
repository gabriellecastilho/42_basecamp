#include <stdio.h>
int ft_recursive_factorial(int nb);

int main (void)
{
	int n;
	n = 5;
	//ft_recursive_factorial(n);
	printf("%d! é %d", n, ft_recursive_factorial(n));
	return (0);
}