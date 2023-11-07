#include <stdio.h>
#include <math.h>



double dydx(double a,double b)
{
	return  5-100*a;
}
// 
// 
double ypr(double yo,double h) //proximo y
{
	return (dydx(yo,h)*0.001)+yo;  	
}






int main()
{
	double y[2000],x[2000],coef;
	int i,b;
	b=1000;
	y[0]=0;	
	x[0]=0;

	for(i=1;i<b;i++)
	{	
		x[i] = x[i-1]+0.001;
		y[i] = ypr(y[i-1],x[i-1]);
		
	}


	FILE *resultado;
	resultado  = fopen("dadosed.txt","w");
	printf("%f\n",x[0]);
	for (i=0;i<=b;i++)
	{
		fprintf(resultado,"%f\n",x[i]);
	}
fprintf(resultado,"\n");

	for (i=0;i<=b;i++)
	{
		fprintf(resultado,"%f\n",y[i]);
	}
	fclose(resultado);

return 0;}





               

