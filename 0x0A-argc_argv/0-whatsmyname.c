#include <stdio.h>

/**
 * main - is a function that prints the  name of the file
 * @argc: This is the argument count
 * @argv: This is the argument vector
 * Return: This return to 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
