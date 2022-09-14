#include <stdio.h>

/**
<<<<<<< HEAD
 * main - print all combinations of three different digits
 * Return: Always 0 (Success)
=======
 * main - program that prints all possible different combinations of
 * three digits
 * Numbers must be separated by ,followed by a space
 * The two digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * Return: 0
>>>>>>> 9052a5ba611ea71a0e30a39ed3d5dc39af7b521a
 */

int main(void)
{
<<<<<<< HEAD
int one;
int ten;
int hundred;

for (hundred = '0'; hundred <= '9'; hundred++) /*hundreds place*/
{	
for (ten = (hundred + 1); ten <= '9'; ten++) /*tens=100s+1*/
{
for (one = (ten + 1); one <= '9'; one++) /*ones*/
{
putchar(hundred);
putchar(ten);
putchar(one);
if (hundred != '7' || ten != '8' || one != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
=======
	int n1 = 48;
	int n2, n3;
	int com = 44;

	while (n1 <= 57)
	{
		n2 = n1 + 1;
		while (n2 <= 57)
		{
			n3 = n2 + 1;
			while (n3 <= 57)
			{
				putchar(n1);
				putchar(n2);
				putchar(n3);
				if (n1 != 55 || n2 != 56 || n3 != 57)
				{
					putchar(com);
					putchar(32);
				}
				n3 += 1;
			}
			n2 += 1;
		}
		n1 += 1;
	}
	putchar('\n');
	return (0);
>>>>>>> 9052a5ba611ea71a0e30a39ed3d5dc39af7b521a
}
