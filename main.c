#include "header.h"
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int n;
	_printf("%f\n");
	_printf("%s hello world\n", NULL);
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	n = _printf("je m'appel Seth \n");/* normal string */
	printf("Length [%d], strlen [%lu]\n", n, strlen("je m'appel Seth \n"));
	n = _printf("hello wold\n");/* normal string */
	printf("Length [%d], strlen [%lu]\n", n, strlen("hello wold\n"));
	n = _printf("the beauty is great\n");/* normal string */
	printf("Length [%d], strlen [%lu]\n", n, strlen("the beauty is great\n"));
	n = _printf("the beauty is %c great %c %c \n", 'h', 'T', 'F');/* %c */
	printf("Length [%d], strlen [%lu]\n", n, strlen("the beauty is h great T F \n"));
	printf("hello [length = %d]\n",_strlen("hello"));	
	n = _printf("the beauty of %s %s madness\n", "the", "world is");/* %s */
	printf("Length [%d], strlen[%lu]\n", n, strlen("the beauty of the world is madness\n"));
        /**
	 * 
	n = _printf("%d\n", INT_MAX);
	printf("Length [%d]\n", n);
	n = _printf("%d\n", INT_MIN);
	printf("Length [%d]\n", n);
	n = printf("%d\n", 012);
	printf("Length [%d]\n", n);
	n = printf("%d\n", 0x12);
	printf("Length [%d]\n", n);
	n = printf("%i\n", 012);
	printf("Length [%d]\n", n);
	n = printf("%i\n", 0x12);
	printf("Length [%d]\n", n);
	n = print_b(18);
	printf("\nLength [%d]\n", n);
	n = print_b(10);
	printf("\nLength [%d]\n", n);
	n = print_b(20);
	printf("\nLength [%d]\n", n);
	n = print_b(3);
	printf("\nLength [%d]\n", n);
	return (0);
	*/
	return (0);
}
