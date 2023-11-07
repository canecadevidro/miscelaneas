#include <stdio.h>
#include <math.h>



double dydx(double a)
{
	double q;
	q = 10-a;
	return q;
}

double ypr(double coef,double yo)
{
	double q;
	q = (coef*0.001)+yo;  	
	return q;
}

int main()
{
	double y[2000],x[2000],coef;
	int j,i;
	y[0]=1;	
	x[0]=0;
	for(i=0;i<=2000;i++)
	{	j=i+1;
		coef = dydx(y[i]);
		y[j] = ypr(coef,y[i]);
		x[j] = x[i]+0.001;
	}

	FILE *resultado;
	resultado  = fopen("resultado.txt","w");
		fprintf(resultado,"x          y\n");
	for (i=0;i<=2000;i++)
	{
		fprintf(resultado,"%f   %f\n",x[i],y[i]);
	}
	fclose(resultado);

return 0;}





               

