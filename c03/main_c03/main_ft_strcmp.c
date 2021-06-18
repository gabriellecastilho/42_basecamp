#include <stdio.h>
int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char s1[] = "Gabi";
	char s2[] = "Gabrielle";
	
	printf("comparation is %d\n",ft_strcmp(s1, s2));
	return (0);
}