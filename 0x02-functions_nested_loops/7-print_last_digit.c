#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	print_last_digits(98);
	print_last_digits(0);
	r = print_last_digits(-1024);
	 _putchar('0' + r);
	 _putchar('\n');
	return (0);
}
