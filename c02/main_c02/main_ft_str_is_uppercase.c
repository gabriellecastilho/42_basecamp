#include <stdio.h>
int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str;

	str = "GABIC";
	ft_str_is_uppercase(str);
	printf("result é %d\n", ft_str_is_uppercase(str));
	return (0);
}
