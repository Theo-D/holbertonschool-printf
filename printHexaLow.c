#include "main.h"
/**
 * printHexaLow - Converts usingned int to base 16 and prints it.
 * @args: the unsigned int to be converted and printed.
 *
 * Return: the count of printed characters.
 */
int printHexaLow(va_list args)
{
	int sumChar = 0, i = 0;
	unsigned int uInt = va_arg(args, unsigned int);
	unsigned int buffer = 0;
	char uIntToStr[11];

	while (uInt > 0)
	{
		buffer = (uInt % 16);
		if (buffer < 10)
		{
			buffer = buffer + 48;
			uIntToStr[i] = buffer;
			i++;
		}
		else
		{
			buffer += 87;
			uIntToStr[i] = buffer;
			i++;

		}
		uInt /= 16;
	}
	sumChar = i;
	if (uInt == 0 && i < 2)
	{
		_putchar('0');
		sumChar += 1;
	}
	while (i > 0)
	{
		_putchar(uIntToStr[i - 1]);
		i--;
	}

	return (sumChar);
}
