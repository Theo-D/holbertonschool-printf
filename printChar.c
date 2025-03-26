#include "main.h"

/**
 *printChar - prints number of characters
 *@args: arguments
 *Return: Always 0
 */
int printChar(va_list args)
{
	char character = va_arg(args, int);

	_putchar(character);

	return (1);
}
