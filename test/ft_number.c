#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_number(void)
{
	int	a;

	a = 1;
	while (a <= 1)
	{
		ft_putcha(a);
		a++;
	}
}

int	main(int argc, char *argv[])
{
	ft_number();
	return (0);
}
