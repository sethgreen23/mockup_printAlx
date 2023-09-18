#include "header.h"
/**
 * switch_op - switch statement
 * @format: foramt string
 * @printed: printed caracters
 *
 * Return: printed strings
 */
int switch_op(const char *format,va_list lst, int printed)
{
	char character;

	if (*format == '%')
	{
		write(1, format, 1);
		printed++;
	}
	else if (*format == 'c')
	{
		character = va_arg(lst, int);
		write(1, &character, 1);
		printed++;
	}
	else if (*format == 's')
	{
		printed += print_s(va_arg(lst, char *));
		printed++;
	}
	else
	{
		write(1, "%%", 1);
		write(1, format, 1);
		printed += 2;
	}
	return (printed);
}
