#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef int (*f)(int);
int* func(f, int*, int*);
int MultiplyThree(int);
int DevideThree(int);
int* InitArray(int*);
void FirstTask();
void SecondTask();
void ThirdTask();
void ShowArray(int*, int*);