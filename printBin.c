#include "main.h"
/**
 * printBin - Prints a given usingned int converted to binary.
 * @args: usigned int to be converted to binary.
 *
 * Return: count of printed characters.
 */
int printBin(va_list args)
{
	unsigned int uInteger = va_arg(args, unsigned int);
	int sumchar = 0, i = 0;
	char uintToStr[32];

	if (uInteger < 2)
	{
		_putchar((int)uInteger + 48);
		return (1);
	}

	while (uInteger > 0)
	{
		uintToStr[i] = (uInteger % 2) + 48;
		uInteger /= 2;
		i++;
	}
	sumchar = i;

	while (i > 0)
	{
		_putchar(uintToStr[i - 1]);
		i--;
	}

	return (sumchar);
}
