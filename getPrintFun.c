#include "main.h"
/**
 *
 */
int getPrintFun(char c, va_list args)
{
	printForm_t printFormat[] = {
		{'d', printInt},
		{'i', printInt},
		{'s', printStr},
		{'c', printChar},
		{'\0', NULL}
	};
	int i = 0;
	int sumChar = 0;

	while (printFormat[i].formSpec)
	{
		if (printFormat[i].formSpec == c)
		{
			sumChar = printFormat[i].printFun(args);
			return (sumChar);
		}
		i++;

	}
	if (c == '%')
	{
		_putchar('%');
		return (1);
	}
	else
	{
		_putchar(c);
		return (1);
	}
}
