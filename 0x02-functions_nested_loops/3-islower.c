#include "main.h"

/**
 * _islower -> checks if the character is lowercase
 * @c: a character argumen
 * Return: return 1 or 0 depending on input
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
