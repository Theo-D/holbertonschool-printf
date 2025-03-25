#include "main.h"
#include <stdio.h>

/**
 *printInt - handles the conversion specifiers
 *args: arguments
 *Return: Always 0
 */
int printInt(va_list *args)
{
	int i = 0;
	int integer = va_arg(args, int);
	char *intToStr;
	int sumChar;
	unsigned short isNeg = 0;


	if (integer < 0)
	{
		integer *= -1;
		isNeg = 1;
	}

	while (integer > 0)
	{
		intToStr[i++] = integer % 10 + '0';
		integer /= 10;
	}

	if (isNeg == 0)
		_putchar('-');
	
	sumChar = i;

	while (i > 0)
	      {	
		_putchar(intToStr[i--]);
	      }
	return (sumChar);
}
