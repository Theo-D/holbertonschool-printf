#include "main.h"
#include <stdio.h>

/**
 *printChar - prints number of characters
 *@args: arguments
 *Return: Always 0
 */
int printChar(va_list *args)
{
	char character = args;
	
	if (character >= 32 && character <= 126)
		_putchar(character);
			
	return (0);
}
