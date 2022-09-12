#include <stdio.h>

/**
 * main - print possible combination of two 2-digit
 *
 * Description : print
 *
 *
 * Return: returns zero at the end
*/

int main(void)

{

	int i = 0, p;

	while (i <= 99)
	{
		p = i;
		while (p <= 99)
		{
			if (p != i)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((p / 10) + 48);
				putchar((p % 10) + 48);

				if (i != 98 || p != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++p;
		}
		++i;
	}
	putchar ('\n');
	return (0);

}
