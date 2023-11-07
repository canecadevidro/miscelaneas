#include <stdio.h>
int i;

void oooo (int *q)
{	int u;
	for (u=0;u<10;u++)
	{q[u] = q[u]*2;}
}


int main()
{
int q[10];

for (i=0;i<10;i++)
{q[i] = i;}

oooo(q);
for (i=0;i<10;i++)
{printf("%d ",q[i]);}
return 0;
}