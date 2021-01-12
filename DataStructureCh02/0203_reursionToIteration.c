#include <stdio.h>

int factorial_iter(int n)
{
	int i, result = 1;
	for (i = 1; i < n; i++)
		result = result * i;	// 반복문
	return(result);				// 한 번 반환
}