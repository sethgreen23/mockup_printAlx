#include "header.h"
/**
 * _printf - printf function
 * @format: format string
 *
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	int printed, len;
	va_list lst;

	printed = 0;
	va_start(lst, format);
	if (format == NULL)
		return (-1);
	while(*format)
	{
		if (*format != '%') /*if character is not a %*/
		{
			write(1, format, 1);
			printed++;
		}
		else
		{
			/**
			 * how many cases there is?
			 * - % if it is a printf it
			 * - c print the caracter
			 * - s print the string
			 */
			format++; /* skip to the next character*/
			if (*format == '%')
			{
				write(1, format, 1);
				printed++;
			}
			else if (*format == 'c')
			{
				char character = va_arg(lst, int);
				write(1,&character, 1);
			       	printed++;	
			}
			else if (*format == 's')
			{
				char *str = va_arg(lst, char *);
				len = print_s(str);
				printed += len;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int n = va_arg(lst, int);
				len = print_d(n);
				printed += len;
			}
			
		}
		format++;
	}
	
	va_end(lst);
	return (printed);
}
