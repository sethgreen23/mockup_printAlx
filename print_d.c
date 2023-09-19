#include "main.h"
/**
 * print_d - print a decimal number
 * @n: number ot convert
 * @global_buffer: buffer
 * @index: index
 * Return: number length
 */
int print_d(int n, char *global_buffer, int *index)
{
	int isNegative, i, count, j, temp;
	char buffer[32];

	i = 0, isNegative = 0, count = 0;
	if (n == INT_MIN)
	{
		write(1, "-2147483648", _strlen("-2147483648"));
		return (_strlen("-2147483648"));
	}
	if (n < 0)
	{
		n = -n;
		isNegative = 1;
	}
	do {
		buffer[i++] = n % 10 + '0';
		count++;
		n /= 10;
	} while (n > 0);
	if (isNegative)
	{
		buffer[i++] = '-';
		count++;
	}
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
