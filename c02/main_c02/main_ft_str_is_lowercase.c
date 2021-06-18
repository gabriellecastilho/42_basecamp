#include <stdio.h>
int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str;

	str = "gabic";
	ft_str_is_lowercase(str);
	printf("result é %d", ft_str_is_lowercase(str));
	return (0);
}
