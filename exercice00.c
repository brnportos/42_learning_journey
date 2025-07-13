#include <unistd.h>
void ft_putchar (char c)
{
	c = 'a';
	write (1, &c, 1);
}
int main (void)
{

	ft_putchar ('b');
	return (0);
}
