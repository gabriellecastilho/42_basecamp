#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	int n;
	n = 3;
	char s1[] = "Gabi";
	char s2[] = "Gabrielle";
	
	printf("comparation is %d\n",ft_strncmp(s1, s2, n));
}