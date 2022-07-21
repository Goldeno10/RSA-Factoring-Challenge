#include "rsa.h"

/**
*main - Entry point
*@argc: Number of arguments
*@argv: Array of arguments
*Return: 0 (success)
*/
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE factors file\n");
		exit(EXIT_FAILURE);
	}
	file_op(argv[1]);
	return (0);
}
