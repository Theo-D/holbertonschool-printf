#include "main.h"
/**
 * printUInt - Prints an unsigned int given as arg.
 * @args: the unsigned int to be printed.
 *
 * Return: the count of printed characters.
 */
int printUInt(va_list args)
{
	int sumChar = 0, i = 0;
	unsigned int uInt = va_arg(args, unsigned int);
	char uIntToStr[10];

	if ( uInt == 0)
	{
		_putchar('0');
		return (1);
	}
	while (uInt > 0)
	{
		uIntToStr[i] = (uInt % 10) + 48;
		uInt /= 10;
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
