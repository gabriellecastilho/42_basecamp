#include <stdio.h>
char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[] = "GabiC";

	ft_strlowcase(str);
	printf("str é %s", str);
}
