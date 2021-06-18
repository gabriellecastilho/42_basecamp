#include <stdio.h>

char *ft_strdup(char *src);

int main (void)
{
	char src[] = "Lovely day";

	//ft_strdup(src);
	printf("o resultado da função é %s\n", ft_strdup(src));
	return(0);
}