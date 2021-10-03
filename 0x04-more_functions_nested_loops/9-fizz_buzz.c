#include "main.h"

/**
 * fizz_buzz - prints the numbers from 1 to 100
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}

}

/**
 * main - Entry Point
 * Return: 0
 */

int main(void)
{

	fizz_buzz(void);
	return (0);
}
