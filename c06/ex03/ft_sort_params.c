#include <unistd.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	result = (unsigned char) s1[i] - (unsigned char) s2[i];
	return (result);
}

void	ft_sort_int_tab(char **argv, int argc)
{
	int		i;
	char	*box[1];

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			box[0] = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = box[0];
			i = 1;
		}
		else
			i++;
	}
}

void	ft_putstr (char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main (int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_int_tab(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
