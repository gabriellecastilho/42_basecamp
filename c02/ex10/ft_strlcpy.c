unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				length;
	unsigned int	i;

	length = 0;
	while (src[length])
		length++;
	i = 0;
	if (size != 0)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (length);
}
