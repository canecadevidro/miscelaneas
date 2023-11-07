#include <stdio.h>


double a[3][3] = {{1,2,3},{1,5,6},{1,5,6}};


int main()
{
int e,f;


for (e=0;e<3;e++)
{	for(f=0;f<3;f++)
	{printf("%.0f ",a[e][f]);}
printf("\n");
}

return 0;}