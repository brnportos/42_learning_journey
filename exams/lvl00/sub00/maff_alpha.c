#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_alpha(void)
{
	int	alpha;

	alpha = 97;
	while (alpha <= 122)
	{
		if (alpha % 2 == 0)
			ft_putchar(alpha - 32);
		else
			ft_putchar(alpha);
		alpha++;
	}
}

int	main(int argc, char *argv[])
{
	( void )	argc;
	( void )	argv;
	maff_alpha();
	return (0);
}
