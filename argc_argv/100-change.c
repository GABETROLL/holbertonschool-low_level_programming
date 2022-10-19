#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum amount of coins that add up to 'change'.
 *
 * The word 'coins' above means: 25, 10, 5, 2, and 1.
 *
 * @argc: argument count
 * @argv: argument pointer array
 *
 * Return: 0 if only one argument (not including executable)
 * was entered, otherwise 1.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int cents;
		int coin_index;
		int result;
		int coins[] = {25, 10, 5, 2, 1};

		cents = atoi(argv[1]);
		coin_index = 0;
		result = 0;

		if (cents < 0)
		{
			printf("0\n");
			return (0);
		}

		while (cents)
		{
			if (cents - coins[coin_index] < 0)
			{
				coin_index++;
			}
			else
			{
				result++;
				cents -= coins[coin_index];
			}
		}

		printf("%d\n", result);

		return (0);
	}
}

