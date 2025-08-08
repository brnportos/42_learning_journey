#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	if(ac == 2)
	{
		int	i = 0;
		int	stock = 0;
			while(av[1][i])
			{
				if(av[1][i] >= 'A' && av[1][i] <= 'Z')
				{
					stock = 'Z' - av[1][i] + 'A';
					ft_putchar(stock);
				}
				else if(av[1][i] >= 'a' && av[1][i] <= 'z')
				{
					stock = 'z' - av[1][i] + 'a';
					ft_putchar(stock);
				}
				else
					ft_putchar(av[1][i]);
				i++;
			}
	}
	ft_putchar('\n');
	return (0);
}
