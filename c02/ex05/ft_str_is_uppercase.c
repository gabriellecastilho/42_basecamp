int	ft_str_is_uppercase(char *str)
{
	int	result;
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
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
