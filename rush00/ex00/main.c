void	ft_putchar(char c);
void	rush(int x, int y);
int		ft_char_to_int(char *num);
int		ft_char_to_int2(char *num, int quant);

int	ft_char_to_int2(char *num, int quant)
{
	int	result;
	int	cont;
	int	multi;

	result = 0;
	multi = 1;
	cont = quant - 1;
	while (cont >= 0)
	{	
		result += ((num[cont] - '0') * multi);
		multi *= 10;
		cont--;
	}
	return (result);
}

int	ft_char_to_int(char *num)
{
	int	cont;

	cont = 0;
	while (num[cont] != '\0')
	{
		if (!(num[cont] >= '0' && num[cont] <= '9'))
		{
			return (-1);
		}
		cont++;
	}
	return (ft_char_to_int2(num, cont));
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc > 2)
	{
		x = ft_char_to_int(argv[1]);
		y = ft_char_to_int(argv[2]);
		rush(x, y);
	}
	else
	{
		rush(10, 10);
	}
	return (0);
}
