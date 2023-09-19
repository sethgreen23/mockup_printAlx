#include "main.h"

/**
 * print_percent - print percent character
 * @buffer: buffer
 * @index: index
 * Return: 1
 */
int print_percent(char *buffer, int *index)
{
	store_character(buffer, index, '%');
	return (1);
}

/**
 * print_char - print character
 * @lst: argument
 * @buffer: buffer
 * @index: index
 * Return: 1
 */
int print_char(va_list lst, char *buffer, int *index)
{
	char character = va_arg(lst, int);

	store_character(buffer, index, character);
	return (1);
}

/**
 * print_ns - print unknown specifiers
 * @ch: character
 * @buffer: buffer
 * @index: index
 * Return: 2 or -1
 */
int print_ns(char ch, char *buffer, int *index)
{
	char character = '%';

	if (ch == '\0')
	{
		print_buffer(buffer, index);
		return (-1);
	}
	store_character(buffer, index, character);
	store_character(buffer, index, ch);
	return (2);
}
