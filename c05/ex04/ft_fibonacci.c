int	ft_fibonacci(int index)
{
	int	fibo;

	fibo = 0;
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	if (index > 1)
		fibo = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (fibo);
}
