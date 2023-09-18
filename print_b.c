#include "main.h"
/**
 * print_b - print binary
 * @n: integer
 *
 * Return: binary number
 */
int print_b(unsigned int n)
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
		write(1, &buffer[j], 1);
	}
	return (count);
}
