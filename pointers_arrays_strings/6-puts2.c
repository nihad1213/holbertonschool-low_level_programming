#include "main.h"

/**
 * puts2 - print every other character of 
 * a string
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int length = 0;

	while (*(length + str) != '\0')
	{
		if (str % 2 == 0)
		{
			_putchar(*(str + i));
		}
		length++;
	}
	_putchar('\n');
}
