#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb);

int main (void)
{
	int nb;
	char src[] = "Gabi";
	char dest[] = "Gabrielle";

	nb = 2;
	ft_strncat(dest, src, nb);
	printf("dest é %s\n", dest);
	return (0);
}