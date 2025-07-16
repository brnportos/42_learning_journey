#include <unistd.h>
void negative_positive (int number)
{
	if (number < 0)
		write (1, "Negative\n", 9);
	else
		write (1, "Positive\n", 9);
}
int main (int argc, char *argv[])
{
	(void) argc;
	(void) argv;
	int number;
	number = -9;
	negative_positive (number);
	return (0);
}
