#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: how many cents do we need
 * @argc: number of passed arguments
 * @argv: array of the passed arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i;
		int m_cents = 0;
		int money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= cents[i])
			{
				m_cents += money / cents[i];
				money = money % cents[i];
				if (money == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", m_cents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
