#include "main.h"
/**
 * _printf - Prints data passed as args according to format by calling
 * getPrintFun().
 * @format: string containing the informations to print itself.
 *
 * Return: The count of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, sumChar = 0;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			sumChar += getPrintFun(format[i], args);
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
			sumChar += -1;
		else
		{
			_putchar(format[i]);
			sumChar += 1;
		}
			i++;
	}

	_putchar(-1);
	va_end(args);
	return (sumChar);
}
