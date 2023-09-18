#include "header.h"
/**
 * _printf - printf function
 * @format: format string
 *
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	int printed;
	va_list lst;

	printed = 0;
	va_start(lst, format);
	if (format == NULL)
		return (-1);
	while(*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			printed++;
		}
		else
		{
			format++;
			printed = (switch_op(format, lst, printed));
		}
		format++;
	}
	va_end(lst);
	return (printed);
}
