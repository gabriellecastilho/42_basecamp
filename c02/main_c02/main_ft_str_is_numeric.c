#include <stdio.h>
int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*str;

	str = "123A5";
	ft_str_is_numeric(str);
	printf("resultado é %d\n", ft_str_is_numeric(str));
	return (0);
}
