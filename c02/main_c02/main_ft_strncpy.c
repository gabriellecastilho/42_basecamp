#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char			src[] = "Oi";
	char			dest[] = "GabiC";
	unsigned int	n;

	n = 6;
	ft_strncpy(dest, src, n);
	printf("dest[0] é %c\n", dest[0]);
	printf("dest[1] é %c\n", dest[1]);
	printf("dest[2] é %c\n", dest[2]);
	printf("dest[3] é %c\n", dest[3]);
	printf("dest[4] é %c\n", dest[4]);
	printf("dest[4] é %c\n", dest[5]);
}
