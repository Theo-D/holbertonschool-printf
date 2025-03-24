#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printStr(va_list args);
int printChar(va_list args);
int printPercent(va_list args);

typedef struct printForm{

	char formSpec;
	void (*printX)(va_list args);

} printForm_t;

#endif
