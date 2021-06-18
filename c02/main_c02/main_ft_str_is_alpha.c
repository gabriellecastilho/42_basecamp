#include <stdio.h>
int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str;

	str = "";
	ft_str_is_alpha(str);
	printf("resultado é %d\n", ft_str_is_alpha(str));
	return (0);
}
