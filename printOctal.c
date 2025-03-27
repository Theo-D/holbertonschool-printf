#include "main.h"
/**
 * printOctal - Converts usingned int to base 8 and prints it.
 * @args: the unsigned int to be converted and printed.
 *
 * Return: the count of printed characters.
 */
int printOctal(va_list args)
{
	int sumChar = 0, i = 0;
	unsigned int uInt = va_arg(va_list, unsigned int);
	char uIntToStr[11];

	while (uInt > 0)
	{
		uIntToStr[i] = (uInt % 8) + 48;
		uInt /= 8;
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
