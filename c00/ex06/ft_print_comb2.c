#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_itoa (int n)
{
	char	d1;
	char	d2;

	d1 = n / 10 + '0';
	d2 = n % 10 + '0';
	ft_putchar(d1);
	ft_putchar(d2);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 00;
	n2 = 01;
	while (n1 <= 98)
	{
		while (n2 <= 99)
		{
			ft_itoa (n1);
			ft_putchar (' ');
			ft_itoa (n2);
			if (n1 == 98)
				return ;
			ft_putchar (',');
			ft_putchar (' ');
			n2++;
		}
		n1++;
		n2 = n1 + 1;
	}
}
