#include <stdio.h>
/**
 * my_ages - prints my age
 * @year: the birth year
 * Return: returns your age
 */
int my_ages(int year)
{
	int age = 2022 - year;

	return (age);
}
/**
 * main - prints my age
 * Return: 0
 */
int main(void)
{
	int b = my_ages(1990);

	printf("my age: %d\n", b);
	return (0);
}

