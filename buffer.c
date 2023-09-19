#include "main.h"
/**
 * empty_buffer - empty the content of the buffer
 * @buffer: buffer array
 * @index: index
 *
 * Return: void
 */
void empty_buffer(char *buffer, int *index)
{
	write(1, buffer, BUFFER_SIZE);
	*index = 0;
}

/**
 * store_character - print one caracter at a time
 * @buffer: buffer array
 * @index: index
 * @chr: character
 *
 * Return: nothing
 */
void store_character(char *buffer, int *index, char chr)
{
	if (*index == BUFFER_SIZE)
		empty_buffer(buffer, index);
	buffer[(*index)++] = chr;
}
/**
 * print_buffer - print buffer content
 * @buffer: buffer array
 * @index: index
 *
 * Return: nothing
 */
void print_buffer(char *buffer, int *index)
{
	write(1, buffer, *index);
}
/**
 * store_string - store string
 * @buffer: buffer array
 * @index: index
 * @str: string to store
 *
 * Return: nothing
 */
void store_string(char *buffer, int *index, char *str)
{
	int len, i;

	len = _strlen(str);
	for (i = 0; i < len; i++)
		store_character(buffer, index, str[i]);
}
