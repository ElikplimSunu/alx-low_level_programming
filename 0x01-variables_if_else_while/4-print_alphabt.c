#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int i = 97, j = 65;

	while (i >= 97 && i <= 122)
	{
		if (i == 101 || i == 113)
		{
			i++;
			continue;
		} else
		{
			putchar(i);
		}
		i++;
	}

	putchar('\n');

	return (0);
}
