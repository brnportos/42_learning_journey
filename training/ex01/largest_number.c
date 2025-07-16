#include <unistd.h>
void largest_number (int a, int b, int c)
{
	if (a > b && a > c)
		write (1, "The largest number is a.\n", 25);
	else if (b > a && b > c)
		write (1, "The largest number is b.\n", 25);
	else
		write (1, "The largest number is c.\n", 25);
}
int main (int argc, char *argv[])
{
	(void) argc;
	(void) argv;
	int a;
	int b;
	int c;

	a = 900;
	b = 700;
	c = 1000;
	largest_number (a, b, c);
	return (0);


}
