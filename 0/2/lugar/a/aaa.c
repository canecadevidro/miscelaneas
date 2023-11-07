
#include <stdio.h>

#include<math.h>

double f(int x)
{return pow(x,4)+pow(5,x)/5;}

double g(int x)
{return pow(5,x);}





int main()
{
int i;
for (i=0;i<100;i=i+10)
{
	printf("n4+5(n-1) =%lf      5n = %lf \n",f(i),g(i));	

}



return 0;}