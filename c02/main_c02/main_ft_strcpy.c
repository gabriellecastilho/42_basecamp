#include <stdio.h>
char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "GabiC";
	char	dest[] = "Oi";

	printf("dest é %s\n", dest);
	ft_strcpy(dest, src);
	printf("dest agora é %s\n", dest);
}
