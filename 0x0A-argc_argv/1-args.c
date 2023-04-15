#include <stdio.h>

/**
 * main-print number of arguments passed.
 * @argc:number of command line arguments
 * @argv:pointer to an array of the argument vector
 * Return:0-success, non-zero-fail.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	print("%d\n", argc - 1)
	return (0);
}
