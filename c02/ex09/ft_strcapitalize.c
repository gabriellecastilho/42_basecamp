int	ft_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (ft_is_lowercase(str[0]))
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i])
	{	
		if (!(ft_is_alpha(str[i - 1]) || ft_is_numeric(str[i - 1])))
		{
			if (ft_is_lowercase(str[i]))
				str[i] -= 32;
		}
		else if (ft_is_uppercase(str[i]))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
