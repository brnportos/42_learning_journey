#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	min;
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[min] > tab[j])
				min = j;
			j++;
		}
		temp = tab[i];
		tab[i] = tab[min];
		tab[min] = temp;
		i++;
	}
}
