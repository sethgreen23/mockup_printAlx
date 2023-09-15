#include "header.h"
/**
 * _strlen - count the length of the string
 * @s: string to count
 * 
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}
/**
 * print_s - print string
 * @s: string to print
 *
 * Return: length of string
 */
int print_s(char *str)
{
	int len;

	len = _strlen(str);
	for (; *str != '\0'; str++)
		write(1, str, 1);
	return (len);
}
