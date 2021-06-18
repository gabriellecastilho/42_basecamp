int	ft_strlen (char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_dest;
	unsigned int	size_src;
	int				i;
	int				result;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	i = 0;
	if (size < size_dest)
		return (size + size_src);
	while (size_dest + 1 < size && src[i] != 0)
	{
		dest[size_dest] = src[i];
		size_dest++;
		i++;
	}
	dest[size_dest] = '\0';
	result = ft_strlen(dest) + ft_strlen(&src[i]);
	return (result);
}
