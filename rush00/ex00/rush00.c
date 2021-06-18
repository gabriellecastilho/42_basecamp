#define CORNER1 'o'
#define CORNER2 'o'
#define CORNER3 'o'
#define CORNER4 'o'
#define MIDDLE1 '-'
#define MIDDLE2 '|'

void	ft_putchar (char c );

void	ft_print_line(int len, char corner1, char middle, char corner2)
{
	int	p_middle;

	ft_putchar (corner1);
	p_middle = 2;
	while (p_middle < len)
	{
		ft_putchar(middle);
		p_middle++;
	}
	if (len > 1)
	{
		ft_putchar(corner2);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	p_middle;

	if ((x <= 0) || (y <= 0))
	{
		return ;
	}
	ft_print_line (x, CORNER1, MIDDLE1, CORNER2);
	p_middle = 2;
	while (p_middle < y)
	{
		ft_print_line (x, MIDDLE2, ' ', MIDDLE2);
		p_middle++;
	}
	if (y > 1)
	{
		ft_print_line (x, CORNER3, MIDDLE1, CORNER4);
	}
}
