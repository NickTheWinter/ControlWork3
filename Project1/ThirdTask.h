#pragma once
#include "Header.h"
typedef struct Sp {
	int a;
	struct Sp* next;
}LOS;
LOS* CreateLOS(int n)
{
	LOS* los = calloc(1, sizeof(LOS));
	los->a = 1;
	LOS* p, *q;
	p = los;
	for (size_t i = 0; i < n - 1; i++)
	{
		q = calloc(1, sizeof(LOS));
		q->a = p->a + 1;
		p->next = q;
		p = q;
	}
	return los;
}
void ShowLOS(LOS* los) 
{
	while (los) 
	{
		printf("%d ", los->a);
		los = los->next;
	}
	printf("\n");
}
LOS* KillLOS(LOS* los)
{
	LOS* p = los;
	while (los) 
	{
		p = los->next;
		free(los);
		los = p;
	}
	return NULL;
}
LOS* ReplaceInLOS(LOS* los,int a, int n) 
{
	LOS* p = los;
	for (size_t i = 0; i < n; i++)
	{
		p = p->next;
	}
	p->a = a;
	return los;
}