#include <stdio.h>

int factorial(int n)
{
	if (n <= 1) return(1);				// 1 != 1
	else return(n * factorial(n - 1));	// 재귀호출(순환)
}