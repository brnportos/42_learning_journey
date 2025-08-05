#include <unistd.h>

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		int	i = 0;
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				char	j = argv[1][i];
				while(j >= 'A')
				{
					write(1, &argv[1][i], 1);
					j--;
				}
			}
			else if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				char	j = argv[1][i];
				while(j >= 'a')
				{
					write(1, &argv[1][i], 1);
					j--;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
