#include "rsa.h"

/**
 *file_op - Handles file operations
 *@filename: Name of the file
 *Return: Nothing
*/
void file_op(char *filename)
{
	char *lineptr = NULL;/* line Buffer */
	size_t n = 0; /*line buffer size */
	ssize_t nread;
	char **tokens = NULL;
	int file_status, line_num = 0, len;
	FILE *stream;

	file_status = access(filename, R_OK);/*check file status*/
	if (file_status == -1)
	{
		dprintf(2, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	stream = fopen(filename, "r");/*open file*/
	if (stream == 0)
	{
		dprintf(2, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while ((nread = getline(&lineptr, &n, stream)) != -1)
	{
		line_num++;
		len = strlen(lineptr);
		tokens = malloc(sizeof(char *) * (len + 1));
		tok_arr(lineptr, tokens);
		factorizer(tokens[0]);
	}
	free(lineptr);
	fclose(stream);
	return;
}
void free_tok(char **tok)
{
	int i = 0;

	while(tok[i])
	{
		free(tok[i]);
		i++;
	}
}
