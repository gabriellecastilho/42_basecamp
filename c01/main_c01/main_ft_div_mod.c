void	ft_div_mod(int a, int b, int *div, int *mod);

int	main (void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 42;
	b = 4;
	ft_div_mod(a, b, &div, &mod);
}
