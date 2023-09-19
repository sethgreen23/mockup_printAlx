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
	printf("%d [length: %d]\n", 0, n);
	n = _printf("%x\n", 100);
	printf("%d [length: %d]\n", 100, n);
	n = _printf("%X\n", 100);
	printf("%d [length: %d]\n", 100, n);
	n = printf("%x\n", -100);
	printf("%d [length: %d]\n", -100, n);
	n = _printf("%X\n", -100);
	printf("%d [length: %d]\n", -100, n);
	n = _printf("%x\n", 500);
	printf("%d [length: %d]\n", 500, n);
	n = _printf("%X\n", 500);
	printf("%d [length: %d]\n", 500, n);
	n = _printf("%x\n", INT_MAX);
	printf("%d [length: %d]\n", INT_MAX, n);
	n = _printf("%X\n", INT_MAX);
	printf("%d [length: %d]\n", INT_MAX, n);
	n = _printf("%x\n", INT_MIN);
	printf("%d [length: %d]\n", INT_MIN, n);
	n = _printf("%X\n", INT_MIN);
	printf("%d [length: %d]\n", INT_MIN, n);
	_printf("%S\n", "Best\nSchool");
	return (0);
}
