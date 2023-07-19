#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry main
 *@argc: number of argument
 *@argv: array of argument
 * Return: depend
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;

	if (argc != 4)
{
	printf("Error\n");
	return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op = argv[2];

if ((get_op_func(op)) == NULL)

{
	printf("Error\n");
	return (99);
}

if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
{
	printf("Error\n");
	return (100);
}

result = (get_op_func(op))(num1, num2);
printf("%d\n", result);

return (0);
}
