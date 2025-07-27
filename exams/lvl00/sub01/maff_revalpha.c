#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_revalpha(void)
{
	int	revalpha;

	revalpha = 122;
	while (revalpha >= 97)
	{
		if (revalpha % 2 == 0)
			ft_putchar(revalpha);
		else
			ft_putchar(revalpha - 32);
		revalpha--;
	}
}

int	main(int argc, char *argv[])
{
	( void )	argc;
	( void )	argv;
	maff_revalpha();
	return (0);
}
