#include "main.h"

/**
<<<<<<< HEAD
 * *rev_string - update value.
 * *@s: value to be evaluate.
 * *Return: not.
 */

=======
 * rev_string - prints a string, in reverse.
 *
 * @s: operand to be evaluated
 */

    return (0);
}

>>>>>>> 5b7502ddf837ba77482b9e065205841c6e3b4758
void rev_string(char *s)
{
	int len = 0;
	int l = 0;
	char *y = s;
	int e = 0;
	int x;
	char n;

	while (*y != '\0')
	{
<<<<<<< HEAD
	y++;
	len++;
	}
	l = len - 1;
	for ( ; e < ((l / 2) + 1) ; e++)
	{
	x = (l - e);
	n = s[e];
	s[e] = s[x];
	s[x] = n;
=======
		y++;
		x++;
	}

	l = len - 1;

	for (; e < ((1 / 2) + 1); e++)
	{
		x = (l -e);
		n = s[e];
		s[e] = s[x];
		s[x] = n;
>>>>>>> 5b7502ddf837ba77482b9e065205841c6e3b4758
	}
}
