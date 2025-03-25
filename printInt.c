#include "main.h"
#include <stdio.h>

/**
 *printInt - handles the conversion specifiers
 *args: arguments
 *Return: Always 0
 */
int printInt(va_list args)
{
	int i = 0;
	int integer = va_arg(args, int);
	char intToStr[11];
	int sumChar = 0;
	unsigned short isNeg = 0;


	if (integer < 0)
	{
		integer *= -1;
		isNeg = 1;
	}

	if (integer == 0)
	{
		_putchar('0');
		return (1);
	}

	while (integer != 0)
	{
		intToStr[i] = (integer % 10) + '0';
		integer /= 10;
		i++;
		sumChar ++;
	}

	if (isNeg == 1)
	{
		_putchar('-');
		sumChar += 1;
	}

	while (i > 0)
	{	
		_putchar(intToStr[i - 1]);
		i--;
	}

	return (sumChar);
}
