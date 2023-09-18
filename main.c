#include "main.h"
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = _printf("%b\n", 0);
	printf("[length: %d]\n", n);
	n = _printf("%b\n", 100);
	printf("[length: %d]\n", n);
	n = _printf("%b\n", 2);
	printf("[length: %d]\n", n);
	n = printf("%b\n", -100);
	printf("[length: %d]\n", n);
	n = _printf("%b\n", -100);
	printf("[length: %d]\n", n);
	return (0);
}
