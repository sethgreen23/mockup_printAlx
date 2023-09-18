#include "main.h"

/**
 * print_percent - print percent character
 * @num: one
 * Return: 1
 */
int print_percent(int num)
{
	char ch = '%';

	write(1, &ch, num);
	return (num);
}

/**
 * print_char - print character
 * @lst: argument
 *
 * Return: 1
 */
int print_char(va_list lst)
{
	char character = va_arg(lst, int);

	write(1, &character, 1);
	return (1);
}

/**
 * print_ns - print unknown specifiers
 * @ch: character
 *
 * Return: 2 or -1
 */
int print_ns(char ch)
{
	char character = '%';

	if (ch == '\0')
		return (-1);
	write(1, &character, 1);
	write(1, &ch, 1);
	return (2);
}
