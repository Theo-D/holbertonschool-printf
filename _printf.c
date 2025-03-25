#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j, k;
	int sumChar;
	printForm_t printFormat = {
		{{'d', 'i'}, printInt},
		{{'s'}, printStr},
		{{'c'}, printChar},
		{{'%'}, printPercent}
	};

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while(format[i])
	{
		j = 0;

		if (format[i] == '%' && format[i + 1] != 0)
		{
			while (printFormat.formSpec[j])
			{
				k = 0;
				while (printFormat.formSpec[j][k]);
				{
					if (printFormat.formSpec[j][k] == format[i + 1])
					{
						/* Voir si la ligne ci dessous permet à la fois d'exécuter la fonction et
						 * d'additioner sa valeur de retour.*/
						sumChar += printformat.printFun[j];
					}
					k++;
				}
				j++;
			}
		}
		i++;
	}
	return (sumChar);
}
