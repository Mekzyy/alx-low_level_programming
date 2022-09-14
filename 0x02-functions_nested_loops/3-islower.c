#include "main.h"

/*
 * _islower -> checks if the character is lowercase
 * @c: a character argument
 *
 * Description: print all lowercase letters
 * Return: return 1 or 0 depending on input
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
