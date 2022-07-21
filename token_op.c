#include "rsa.h"

/**
*tok_arr - creates array of tokens from given input
*@lineptr: The line to be tokenized
*@tokens: Empty array to be fild with tokens
*Return: Nothing
*/

void tok_arr(char *lineptr, char *tokens[])
{
	ssize_t i;
	char *token;

	token = strtok(lineptr, " \t\n");
	i = 0;
	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, " \t\n");
		i++;
	}
	tokens[i] = NULL;
}
