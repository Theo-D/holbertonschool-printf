#include "main.h"
/**
 * printHexaUp - Converts usingned int to base 16 and prints it uppercase.
 * @args: the unsigned int to be converted and printed.
 *
 * Return: the count of printed characters.
 */
int printHexaUp(va_list args)
{
	int sumChar = 0, i = 0;
	unsigned int uInt = va_arg(args, unsigned int);
	unsigned int buffer = 0;
	char uIntToStr[11];

	if (uInt == 0)
	{
		_putchar('0');
		return (1);
	}

	while (uInt > 0)
	{
		buffer = (uInt % 16);
		if (buffer < 10)
			buffer = buffer + 48;
		else
			buffer += 55;
		uIntToStr[i] = buffer;
		uInt /= 16;
		i++;
	}
	sumChar = i;
	while (i > 0)
	{
		_putchar(uIntToStr[i - 1]);
		i--;
	}
	return (sumChar);
}
