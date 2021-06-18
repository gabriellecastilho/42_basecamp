#include <stdio.h>
char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[] = "GabiC";

	ft_strupcase(str);
	printf("str é %s", str);
	return (0);
}
