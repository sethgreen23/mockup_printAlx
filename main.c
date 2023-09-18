#include "main.h"
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = _printf("%x\n", 0);
	printf("[length: %d]\n", n);
	n = _printf("%x\n", 100);
	printf("[length: %d]\n", n);
	n = _printf("%X\n", 100);
	printf("[length: %d]\n", n);
	n = printf("%x\n", -100);
	printf("[length: %d]\n", n);
	n = _printf("%X\n", -100);
	printf("[length: %d]\n", n);
	n = _printf("%x\n", 500);
	printf("[length: %d]\n", n);
	n = _printf("%X\n", 500);
	printf("[length: %d]\n", n);
	n = _printf("%x\n", INT_MAX);
	printf("[length: %d]\n", n);
	n = _printf("%X\n", INT_MAX);
	printf("[length: %d]\n", n);
	n = _printf("%x\n", 4294967295);
	printf("[length: %d]\n", n);
	n = _printf("%X\n", 4294967295);
	printf("[length: %d]\n", n);
	return (0);
}
