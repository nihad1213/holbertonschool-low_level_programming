#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main
 * @argc: numner of arguments
 * @argv: list of arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int a, b, ans;
	int (*fp)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '%' || *argv[2] == '/') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	fp = get_op_func(argv[2]);
	ans = fp(a, b);
	printf("%d\n", ans);

	return (0);
}
