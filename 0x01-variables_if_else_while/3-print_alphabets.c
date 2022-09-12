#include <stdio.h>
/**
 * main - lowercase and uppercase
 *
 * Description -  program that prints the alphabet in lowercase, and then in uppercase, followed by a new line
 * return: 0
 */
int main(void)
{
	char c;

	for(c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for(c = 'A', c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
