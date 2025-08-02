#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 4)
	{
		if (!argv[2][1] && !argv[3][1])
		{
			while (argv[1][i] != '\0')
			{
				if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				{
					if (argv[1][i] == argv[2][0])
						write(1, &argv[3][0], 1);
					else
						write(1, &argv[1][i], 1);
				}
				else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				{
					if (argv[1][i] == argv[2][0])
						write(1, &argv[3][0], 1);
					else
						write(1, &argv[1][i], 1);
				}
				else
					write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
