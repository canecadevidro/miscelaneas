
#include <stdio.h>

#include<math.h>

double f(int x)
{return 1/pow(x,5);}
void 	soma ()
{	int i;
	double s;
	s=0;
	for (i=0;i<100000000000;i++)
	{	s=s+f(i);}

printf("%lf",s);
}

int main()
{
soma(5);	
return 0;}