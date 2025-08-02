#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	fizz_buzz(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		while (i % 3 != 0 || i % 5 != 0)
		{
			if(i <= 9)
				ft_putchar(i + '0');
			else if (i > 9 && i  < 100)
			{
				ft_putchar(i / 10 + '0');
				ft_putchar(i % 10 + '0');
			}
			write(1, "\n", 1);
			i++;
		}
		i++;
		write(1, "\n", 1);
	}
}

int	main(int argc, char *argv[])
{
	fizz_buzz();
	return (0);
}
