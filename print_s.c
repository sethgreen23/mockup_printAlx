#include "main.h"
/**
 * _strlen - count the length of the string
 * @s: string to count
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * print_s - print string
 * @str: string to print
 * @buffer: buffer
 * @index: index
 * Return: length of string
 */
int print_s(char *str, char *buffer, int *index)
{
	int len;
	char *nullStr = "(null)";

	if (str == NULL)
	{
		store_string(buffer, index, nullStr);
		return (6);
	}
	len = _strlen(str);
	store_string(buffer, index, str);
	return (len);
}
