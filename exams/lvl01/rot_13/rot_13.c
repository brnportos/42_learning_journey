#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
					ft_putchar(argv[1][i] + 13);
				else if (argv[1][i] >= 'M' && argv[1][i] <= 'Z')
					ft_putchar(argv[1][i] - 13);
				else
					write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
					ft_putchar(argv[1][i] + 13);
				else if(argv[1][i] > 'm' && argv[1][i] <= 'z')
					ft_putchar(argv[1][i] - 13);
				else
					write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
