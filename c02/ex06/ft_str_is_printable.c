int	ft_str_is_printable(char *str)
{
	int	result;
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 127))
		{
			result = 1;
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
