#include "main.h"
/**
 * print_b - print binary
 * @n: integer
 * @global_buffer: buffer
 * @index: index
 * Return: binary number
 */
int print_b(unsigned int n, char *global_buffer, int *index)
{
	int i, count, j, temp;
	char buffer[100];

	i = 0, count = 0;
	do {
		buffer[i++] = n % 2 + '0';
		count++;
		n /= 2;
	} while (n > 0);
	buffer[i] = '\0';
	for (j = 0; j < i / 2; j++)
	{
		temp = buffer[j];
		buffer[j] = buffer[i - j - 1];
		buffer[i - j - 1] = temp;
	}
	for (j = 0; buffer[j] != '\0'; j++)
	{
		store_character(global_buffer, index, buffer[j]);
	}
	return (count);
}
