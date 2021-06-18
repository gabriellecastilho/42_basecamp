#include <stdio.h>
int ft_find_next_prime(int nb);

int main (void)
{
	int nb;
	
	nb = 2147483647;
	//ft_find_next_prime(nb);
	printf ("O próximo primo ou igual %d é %d\n", nb, ft_find_next_prime(nb));
	return (0);
}