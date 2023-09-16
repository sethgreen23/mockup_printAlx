#include "header.h"
/**
 * print_b - print binary
 * @n: integer
 *
 * Return: binary number
 */
int print_b(int n)
{
	int i, count, j, temp, zero_pad;
	char buffer[32];

	i = 0, count = 0;
	do {
		buffer[i++] = n % 2 + '0';
		count++;
		n /= 2;
	} while (n > 0);
	zero_pad = 4 - (i % 4); /*detect how many zero left pad*/
	if (zero_pad < 4)
	{
		while (zero_pad)
		{
			buffer[i++] = '0';
			count++;
			--zero_pad;
		}
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
		write(1, &buffer[j], 1);
	}
	return (count);
}