#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	static char buff[1024];
	static int index;

	/*char *pBuff = &buff;

	if (buff == NULL)
	{
		buff = malloc(1024 * sizeof(char));
	}*/
	if (c == -1 || index >= 1024)
	{
		write(1, &buff, index);
		i = 0;
	}
	if (c != -1)
	{
		buff[index] = c;
		index++;
	}
	return (index);
}
