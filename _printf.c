#include "main.h"

/**
 * choose_func - choose the specifier
 * @ch: specifier
 * @lst: list of arguments
 * @buffer: buffer
 * @index: index
 * Return: Number of characters printed
 */
int choose_func(char ch, va_list lst, char *buffer, int *index)
{
	int n, printed = 0;

	if (ch == '%')
		printed = print_percent(buffer, index);
	else if (ch == 'c')
		printed = print_char(lst, buffer, index);
	else if (ch == 's')
		printed = print_s(va_arg(lst, char *), buffer, index);
	else if (ch == 'b')
	{
		n = va_arg(lst, unsigned int);
		printed = print_b(n, buffer, index);
	}
	else if (ch == 'd' || ch == 'i')
	{
		n = va_arg(lst, int);
		printed = print_d(n, buffer, index);
	}
	else if (ch == 'o')
	{
		n = va_arg(lst, int);
		printed = print_o(n, buffer, index);
	}
	else if (ch == 'u')
	{
		n = va_arg(lst, int);
		printed = print_u(n, buffer, index);
	}
	else if (ch == 'S')
	{
		printed = print_S(lst, buffer, index);
	}
	else if (ch == 'x' || ch == 'X')
	{
		n = va_arg(lst, int);
		printed = print_hexa(n, ch, buffer, index);
	}
	else
		printed = print_ns(ch, buffer, index);
	return (printed);
}

/**
 * _printf - printf function
 * @format: format string
 *
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	int printed, len, index, i;
	va_list lst;
	char *buffer;

	buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	for (i = 0; i < BUFFER_SIZE; i++)
		buffer[i] = '\0';
	printed = 0, index = 0;
	va_start(lst, format);
	if (format == NULL || *format == '\0')
		return (-1);
	for (; *format; format++)
	{
		if (*format != '%')
		{
			store_character(buffer, &index, *format);
			/*write(1, format, 1);*/
			printed++;
		}
		else
		{
			format++;
			len = 0;
			len = choose_func(*format, lst, buffer, &index);
			if (len < 0)
				return (-1);
			printed += len;
		}
	}
	if (index >= 0)
		print_buffer(buffer, &index);
	free(buffer);
	va_end(lst);
	return (printed);
}
