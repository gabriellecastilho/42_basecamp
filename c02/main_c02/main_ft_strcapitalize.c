#include <stdio.h>
char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "oi+você, seja~bem-vinde,meu NOME é GabiC";

	ft_strcapitalize(str);
	printf("%s", str);
}
