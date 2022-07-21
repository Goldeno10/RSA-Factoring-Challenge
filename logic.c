#include "rsa.h"

/**
*factorizer - factorises an number.
*@num: Number to be factorized
*@line_num:number line number in file
*Return: Nothing
*/

void factorizer(char *num)
{
	int i, flag = 0;
	long int n;
	n = atoi(num);
	if (n != 0)
	{
	 	for (i = (n / 2); i > 0; i--)
		{
			flag = second_loop(i, n);
			if (flag == 1)
				return;
		}
		printf("%ld has no rsa factors\n", n);
		return;
	}
	return;
}
/**
*second_loop - Inner loop
*@i: Integer counter fron first loop
*@n: Number being analysed
*Return: An flag
*/
int second_loop(int i, int n)
{
	int x, flag;

	flag = 0;
	for (x = 0; x < n; x++)
	{
		if (check(i) && check(x))
		{
			if ((i * x) == n)
			{
				printf("%i = %i*%i\n", n, i, x);
				flag = 1;
				return(flag);
			}
		}
	}
	return(flag);
}

/**
*check - checks if a number is a prime number
*factor: number being checked
*Return: A Boolean
*/
bool check(int factor)
{
	int i;

	for (i = 2; i < factor; i++)
	{
		if((factor % i) == 0)
		{
			return(0);
		}
	}
	return(1);
}
