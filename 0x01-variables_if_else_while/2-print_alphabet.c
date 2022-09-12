#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - lower case alphabets
 *
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
