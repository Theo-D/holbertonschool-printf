#include "main.h"

/**
 * printStrPrintable - Prints a string passed as args. If characters are
 * printable, prints them, otherwise prints '\x'.
 * @args: the string to be printed.
 *
 * Return: Count of printed characters.
 */
int printStrPrintable(va_list args)
{
	char *string = va_arg(args, char*);
	int strLen = 0;

	if (string == NULL)
		string = "(null)";

	while (string[strLen] != '\0')
	{
		if (string[strLen] >= 32 || string[strLen] < 127)
		{
			_putchar(string[strLen]);
			strLen++;
		}
		else
		{
			strLen += getHexa(string[strLen]);
		}
	}
	return (strLen);
}

int getHexa(int c)
{
	int sumChar = 0, i = 0, buffer = 0;
	char intToHexa[2];

	while (c > 0)
	{
		buffer = c % 16;
		if (buffer < 10)
			buffer += 48;
		else
			buffer += 55;
		intToHexa[i] = buffer;
		c /= 16;
		i++;
	}
	sumChar = i;
	while (i > 0)
	{
		_putchar(intToHexa[i - 1]);
		i--;
	}

	return (sumChar);
}
