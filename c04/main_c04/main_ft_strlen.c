#include <stdio.h>
int ft_strlen(char *str);

int main (void)
{
	char str[] = {48, 49, 50, 51, 52, 53};
	//ft_strlen(str);
	printf("length is is %d\n", ft_strlen(str));
	return (0);
}