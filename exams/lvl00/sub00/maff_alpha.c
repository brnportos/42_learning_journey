#include <unistd.h>

void	maff_alpha(void)
{
	int	alpha;

	alpha = 1;
	while (alpha <= 26)
	{
		char	c;
		if (alpha % 2 == 0)
			c = (alpha - 32);
		else
			c = alpha;	
		write(1, &c, 1);
		alpha++;
	}
}

int	main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	maff_alpha();
	return (0);
}
