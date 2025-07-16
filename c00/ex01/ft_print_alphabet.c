#include <unistd.h>
void ft_print_alphabet (void)
{
	write (1, "abcdefjhijklmnopqrstuvwxyz", 26);
}
int main (int argc, char *argv[])
{
	ft_print_alphabet ();
	return (0);
}
