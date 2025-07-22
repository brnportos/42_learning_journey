#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	int	a;

	a = 42;
	nbr = &a;
	printf("%d", *nbr);
}

int	main(int argc, char *argv[])
{
	int	a;
	int	*nbr;

	(void) argc;
	(void) argv;	
	nbr = &a;
	ft_ft(nbr);
	return (0);
}
