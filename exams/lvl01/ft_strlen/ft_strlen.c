#include <unistd.h>

int	ft_strlen(char *str)
{
	int	leng;

	leng = 0;
	while (str[leng] != '\0')
	{
		leng++;
	}
	return (leng);
}
