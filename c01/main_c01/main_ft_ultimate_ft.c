void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	nbr9;
	int	*nbr8;
	int	**nbr7;
	int	***nbr6;
	int	****nbr5;
	int	*****nbr4;
	int	******nbr3;
	int	*******nbr2;
	int	********nbr1;
	int	*********nbr;

	nbr = &nbr1;
	nbr1 = &nbr2;
	nbr2 = &nbr3;
	nbr3 = &nbr4;
	nbr4 = &nbr5;
	nbr5 = &nbr6;
	nbr6 = &nbr7;
	nbr7 = &nbr8;
	nbr8 = &nbr9;
	ft_ultimate_ft(nbr);
	return (0);
}
