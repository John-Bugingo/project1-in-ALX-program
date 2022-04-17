#include <stdarg.h>
#include <stdio.h>
/**
 * add_all - adds all integer numbers passed to the function
 *@n: counter of the numbers
 *
 * Return: sum
 */
int add_all(int n, ...)
{
	va_list var;
	int i, sum = 0;

	va_start(var, n);
	for (i = 0; i < n; i++)
		sum += va_arg(var, int);
	va_end(var);
	return (sum);
}
/**
 * main - calls add_all function
 *
 * Return: 0.
 */
int main(void)
{
	int z =	add_all(5, 4, -3, 27, 31, 4);

	printf("sum = %d\n", z);
	return (0);
}
