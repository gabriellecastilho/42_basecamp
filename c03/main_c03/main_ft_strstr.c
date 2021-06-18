#include <stdio.h>
#include <bsd/string.h>
char *ft_strstr(char *str, char *to_find);

int main (void)
{
	char haystack[20] = "EuSouGabiCastilho";
	char needle[10] = "GabiC";

	//ft_strstr(haystack, needle);
	printf("%s",ft_strstr(haystack, needle));
	printf("%s",strstr(haystack, needle));
	return (0);
}