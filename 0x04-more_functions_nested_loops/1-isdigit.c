#include "main.h"

/**
 * _isdigit - Checks for digit
 * @c: The character to be checked
 * Return: 1 for digit character or 0 for anything else
 */

int _isdigit(int c)

{
	if (c >= 30 && c <= 46)
	{
	return (1);
	}
	return (0);
}
