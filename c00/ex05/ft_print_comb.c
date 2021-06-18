#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number (char d1, char d2, char d3)
{
	ft_putchar(d1);
	ft_putchar(d2);
	ft_putchar(d3);
	if (d1 == '7')
		return ;
	ft_putchar (',');
	ft_putchar (' ');
}

void	ft_print_comb (void)
{
	char	d1;
	char	d2;
	char	d3;

	d1 = '0';
	d2 = '1';
	d3 = '2';
	while (d1 <= '9')
	{
		while (d2 <= '9')
		{
			while (d3 <= '9')
			{
				ft_print_number(d1, d2, d3);
				d3++;
			}
			d2++;
			d3 = d2 + 1;
		}
		d2 = d1 + 1;
		d1++;
	}
}
