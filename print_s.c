#include "main.h"
/* creaeating a function to print string*/

int printf_string(va_list val)
{
	char *str;
	int j;
	int length;

	str = va_arg(val, char *);
	if (str == null)
	{

	str = "(null)";
	length = _strlen(str);
	for (j = 0; j < length; j++)
		_putchar(str[j]);
	return (length);
	}
	else 
	{
		length = _strlen(str);
	for (j = 0; j < length; j++)
		_putchar(str[j]);
	return (length);
	}

}
