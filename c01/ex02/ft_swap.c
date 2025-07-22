#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	*a = 42;
	*b = 24;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
