#pragma once
#include "Header.h"
void ShowTriangleArray(int** massiv, int n) 
{
	for (size_t i = n; i > 0; i--)
	{
		for (size_t j = 0; j < i; j++)
		{
			printf("%d ", massiv[i][j]);
		}
		printf("\n");
	}
}