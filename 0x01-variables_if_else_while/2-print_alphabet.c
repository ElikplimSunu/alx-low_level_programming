#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints of alphabets in lowercase with putschar function
 *
 * Return: Always 0(Success)
 */


int main(void)
{
	char alphabeth[] = "abcdefghijklmnopqrstuvwxyz";

	int i, size = sizeof(alphabeth) / sizeof(alphabeth[0]);

	for (i = 0; i < size - 1; i++)
		putchar(alphabeth[i]);
	putchar('\n');
	return (0);
}
