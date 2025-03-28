#include "main.h"
/**
 * getPrintFun - Call functions thanks to a function pointer according
 * to given format specifier.
 * @c: Format specifier.
 * @args: Argument to call the function corresponding to format
 * specifier.
 *
 * Return: the number of printed characters.
 */
int getPrintFun(char c, va_list args)
{
	printForm_t printFormat[] = {
		{'d', printInt},
		{'i', printInt},
		{'s', printStr},
		{'S', printStrPrintable},
		{'c', printChar},
		{'b', printBin},
		{'o', printOctal},
		{'u', printUInt},
		{'x', printHexaLow},
		{'X', printHexaUp},
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
		_putchar('%');
		_putchar(c);
		return (2);
	}
}
