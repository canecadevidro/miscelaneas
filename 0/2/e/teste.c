
#include <stdio.h>

#include<math.h>

struct dados
{
double x[10];
double y[10];

};

struct dados f(struct dados q)
{	
	int h,i;
	for (h=0;h<10;h++)
	{q.y[h]=pow(q.x[h],2);}
	return q;
}




int main()
{

	int i;
struct dados oi;
	for (i=0;i<10;i++)
	{
	oi.x[i] =i;
	}

	oi = f(oi);

for (i=0;i<10;i++)
{printf("%f  %f\n",oi.x[i],oi.y[i]);}



return 0;}