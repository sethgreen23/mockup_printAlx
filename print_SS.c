#include "main.h"

/**
 * print_S - print string
 * @lst: ...
 * Return: length of printed characters
 */
int print_S(va_list lst)
{
	char zero = '0';
	char *str = va_arg(lst, char *);
	int len = 0;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	for (; *str != '\0'; str++)
	{
		if ((*str > 0 && *str < 32) || (*str >= 127))
		{
			write(1, "\\x", 2);
			len += 2;
			if (*str <= 15)
			{
				write(1, &zero, 1);
				len++;
			}
			len += print_hexa(*str, 'X');
		}
		else
		{
			write(1, str, 1);
			len++;
		}
	}
	return (len);
}

