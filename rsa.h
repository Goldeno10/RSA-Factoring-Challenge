#ifndef RSA_H
#define RSA_H

#define  _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
void tok_arr(char *lineptr, char *tokens[]);
bool check(int factor);
void factorizer(char *num);
void file_op(char *filename);
int second_loop(int i, int n);
void free_tok(char **tok);

#endif /* RSA_H */
