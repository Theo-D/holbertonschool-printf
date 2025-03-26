#include "main.h"

/**
 *printChar - prints number of characters
 *@args: arguments
 *Return: Always 0
 */
int printChar(va_list args)
{
	char character = va_arg(args, int);

	if (character >= 32 && character <= 126)
	{
		_putchar(character);
		return (1);
	}

	return (-1);
}
