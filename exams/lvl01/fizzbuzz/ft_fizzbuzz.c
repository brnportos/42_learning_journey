#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	one_nine(void)
{
	int	nbr;
	nbr = 1;
	while(nbr <= 9)
	{
		if(nbr % 3 == 0)
			write(1, "fizz", 4);
		else if(nbr % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putchar(nbr + '0');
		write(1, "\n", 1);
		nbr++;
	}
}

void	ten_ninty_nine(void)
{
	int	nbr;

	nbr = 10;
	while(nbr <= 100)
	{
		if(nbr % 3 == 0 && nbr % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if(nbr % 3 == 0)
			write(1, "fizz", 4);
		else if(nbr % 5 == 0)
			write(1, "buzz", 4);
		else if(nbr == 100)
			write(1, "buzz", 4);
		else
		{
			ft_putchar(nbr / 10 + '0');
			ft_putchar(nbr % 10 + '0');
		}
		write(1, "\n", 1);
		nbr++;
	}
}

int	main(int argc, char **argv)
{
	( void )	argc;
	( void )	argv;
	one_nine();
	ten_ninty_nine();
	return(0);
}
