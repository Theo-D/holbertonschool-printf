#include "main.h"

/**
 * printStr - Prints a string passed as args.
 * @args: the string to be printed.
 *
 * Return: Count of printed characters.
 */
int printStr(va_list args)
{
	char *string = va_arg(args, char*);
	int strLen = 0, i = 0;

	while (string[strLen] != '\0')
	{
		_putchar(string[strLen]);
		strLen++;
	}

	return (strLen);
}
