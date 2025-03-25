#include "main.h"
#include <stdio>

/**
 *print_char - prints characters
 *@args: arguments
 *Return: Always 0
 */
int printChar(va_list *args)
{
	va_list args;
	int i = 0;

	va_start(args, printForm);

	while (printForm)
	{
		putchar(i);
	}
	i++;
	
	va_end(args);
}
