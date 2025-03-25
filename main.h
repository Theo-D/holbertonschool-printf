#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printStr(va_list args);
int printChar(va_list args);
int printInt(va_list args);
int getPrintFun(char c, va_list args);

typedef struct printForm{
	char formSpec;
	int (*printFun)(va_list args);
} printForm_t;

#endif
