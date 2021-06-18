int	ft_sqrt(int nb)
{
	int	square;

	square = 1;
	if (nb <= 0)
		return (0);
	while (nb / (square * square) >= 1)
	{
		if ((nb / (square * square) == 1) && (nb % (square * square) == 0))
			return (square);
		square++;
	}
	return (0);
}
