#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, sumChar = 0;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while(format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			sumChar += getPrintFun(format[i], args);
		}
		else
		{
			_putchar(format[i]);
			sumChar += 1;
		}
		i++;
	}

	va_end(args);

	return (sumChar);
}
