#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabet in loser case
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
		putchar('\n');
	}
	return (0);
}
