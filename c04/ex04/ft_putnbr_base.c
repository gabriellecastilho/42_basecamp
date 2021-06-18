#include <unistd.h>
int	ft_check_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	unsigned int	len_b;

	len_b = 0;
	while (base[len_b])
		len_b++;
	if (ft_check_error(base))
		return ;
	if (nbr < 0)
	{
		n = -nbr;
		write(1, "-", 1);
	}
	else
		n = nbr;
	if (n > (len_b - 1))
	{
		ft_putnbr_base(n / len_b, base);
		ft_putnbr_base(n % len_b, base);
	}
	else
	{
		write(1, &base[nbr], 1);
	}
}
