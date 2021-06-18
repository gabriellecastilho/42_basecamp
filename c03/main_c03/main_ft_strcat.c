#include <stdio.h>
char *ft_strcat(char *dest, char *src);

int main (void)
{
	char src[] = "Gabi";
	char dest[] = "Gabrielle";

	ft_strcat(dest, src);
	printf("dest é %s\n", dest);
	return (0);
}