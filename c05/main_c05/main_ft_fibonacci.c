#include <stdio.h>
int ft_fibonacci(int index);

int main(void)
{
	int index;

	index = 5;
	//ft_fibonacci(index);
	printf ("fibo %d é %d\n", index, ft_fibonacci(index));
	return (0);
}

// 0, 1, 1, 2, 3, 5, 8, 13, 21