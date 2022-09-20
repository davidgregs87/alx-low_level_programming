#include "main.h"

/**
 * main - check the code
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{}

	return (len);

}
