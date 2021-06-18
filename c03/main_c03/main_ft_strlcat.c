unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main (void)
{
	unsigned int size;
	char src[] = "Gabi";
	char dest[] = "Gabrielle";

	size = 5;
	//ft_strlcat(dest, src, size);
	printf("size é %s\n", ft_strlcat(dest, src, size));
	return (0);
}