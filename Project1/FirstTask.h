#pragma once
#include "Header.h"
void ShowArray(int* massiv, int* n)
{
	for (size_t i = 0; i < n; i++)
	{
		printf("%d ", massiv[i]);
	}
	printf("\n");
}
int* func(f func, int* massiv, int* n)
{
	for (size_t i = 0; i < n; i++)
	{
		massiv[i] = func(massiv[i]);
	}
	return massiv;
}
int MultiplyThree(int a)
{
	return a * 3;
}
int DevideThree(int a)
{
	return a / 3;
}
int* InitArray(int* n)
{
	int* massiv = calloc(n, sizeof(int*));
	for (size_t i = 0; i < n; i++)
	{
		massiv[i] = i + 1;
	}
	return massiv;
}