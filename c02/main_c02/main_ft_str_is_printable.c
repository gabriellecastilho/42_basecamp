#include <stdio.h>
int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*str;

	str = "~GabiC!";
	ft_str_is_printable(str);
	printf("result é %d", ft_str_is_printable(str));
	return (0);
}
