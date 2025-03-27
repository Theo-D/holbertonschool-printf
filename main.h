#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printStr(va_list args);
int printChar(va_list args);
int printInt(va_list args);
int printBin(va_list args);
int printOctal(va_list args);
int printUInt(va_list args);
int printHexaLow(va_list args);
int printHexaUp(va_list args);
int getPrintFun(char c, va_list args);
/**
 * struct printForm - Structure that contains format specifier and functions
 * to print data.
 * @formSpec: Format specifier to print data.
 * @printFun: Function to print data corresponding to format specifier.
 *
 * Description: Structure that contains pointer to functions that print data
 * according to the format specifier from the other element.
 */
typedef struct printForm
{
	char formSpec;
	int (*printFun)(va_list args);
} printForm_t;

#endif
