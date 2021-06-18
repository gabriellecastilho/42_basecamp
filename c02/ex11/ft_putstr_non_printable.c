#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_atoh(unsigned char n)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (n > 15)
	{
		ft_atoh(n / 16);
		ft_atoh(n % 16);
	}
	else
	{
		ft_putchar(hexa[n]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			if (str[i] >= 0 && str[i] <= 15)
				ft_putchar('0');
			ft_atoh(str[i]);
		}
		i++;
	}
}
