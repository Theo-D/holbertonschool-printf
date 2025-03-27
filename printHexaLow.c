#include "main.h"
/**
 * printOctal - Converts usingned int to base 8 and prints it.
 * @args: the unsigned int to be converted and printed.
 *
 * Return: the count of printed characters. 
 */
int printOctal(va_list args)
{
	int sumChar = 0, i= 0;
	unsigned int uInt = va_arg(va_list, unsigned int);
	unsigned int buffer = 0;
	char uIntToStr[11];

	while (uInt > 0)
	{
		buffer = (uInt % 16);
		if (buffer < 10)
			buffer = buffer + 48;
		else
			buffer += 97;
		intToStr[i] = buffer
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
