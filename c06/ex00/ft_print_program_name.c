#include <unistd.h>
void	ft_putstr (char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main (int argc, char *argv[])
{
	argc = 1;
	ft_putstr(argv[0]);
	write(1, "\n", 1);
	return (0);
}
