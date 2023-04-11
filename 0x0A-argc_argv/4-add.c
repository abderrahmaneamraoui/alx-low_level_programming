#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Main Entry
 * @argc:  indicates that argc is an input parameter to the functio.
 * @argv: indicates that argv is an input parameter to the function
 * Return:always returns 0 to indicate success
 */
int main(int argc, char *argv[])
{
	int sum;
	int count;
	int i;

	count = 1;
	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
