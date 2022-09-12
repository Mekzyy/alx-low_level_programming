#include <stdio.h>

/**
 * main - Print all the letters except q and e
 *
 * Description -  program that prints the alphabet except q and e
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

      putchar('\n');
      return (0);
}
