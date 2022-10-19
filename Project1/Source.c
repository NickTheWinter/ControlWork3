#include "Header.h"
#include "FirstTask.h"
#include "SecondTask.h"
#include "ThirdTask.h"
int main()
{
	//Выполнить первое задание
	//FirstTask();

	//Выполнить второе задание
	//SecondTask();

	//Выполнить третье задание
	ThirdTask();
	system("pause");
}
void FirstTask() 
{
	int* n = 10;
	int* massiv;
	int* reArray;
	int* reArray2;
	massiv = InitArray(n);
	ShowArray(massiv, n);
	reArray = func(MultiplyThree, massiv, n);
	ShowArray(reArray, n);

	reArray2 = func(DevideThree, reArray, n);
	ShowArray(reArray2, n);
}
void SecondTask()
{
	int n = 5;
	int** massiv = calloc(n, sizeof(int));
	int counter = n;
	for (size_t i = n; i > 0; i--)
	{
		counter = i - 1;
		massiv[i] = calloc(n - 1, sizeof(int));
		for (size_t j = 0; j < i; j++)
		{
			massiv[i][j] = counter;
			counter--;
		}
	}
	ShowTriangleArray(massiv,n);
}
void ThirdTask() 
{
	int n = 10;
	LOS* los = CreateLOS(n);
	ShowLOS(los);
	los = KillLOS(los);
	//Пересоздаём LOS
	los = CreateLOS(n);
	//ReplaceInLOS(los,какое число будет, на каком индексе)
	los = ReplaceInLOS(los, 100, 3);
	ShowLOS(los);
}