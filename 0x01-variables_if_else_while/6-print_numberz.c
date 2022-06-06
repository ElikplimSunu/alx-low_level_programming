#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char numbers[] = "0123456789";
	int size = sizeof(numbers) / sizeof(*numbers);

	for (int i = 0; i < size - 1; i++)
	{
		putchar(numbers[i]);
		putchar('\n');
	}

	return (0);
}
