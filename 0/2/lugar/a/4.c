#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include "e/caixa.h"
FILE *d;
ALTURA=600;
LARGURA=1000;
Mdir=100;
Mesq=100;
Mcm=100;
Mbx=50;
esp=100;
float xcr,ycr;
double x[1000],y[1000];
int j,i;

void funcao()
{	int i,a,rr;
	double b;
	ycr = Mcm+altcaixa/2;
	xcr = Mesq;
	j=-1;
	b=0;
	rr=500;
	while(j<=rr)
	{	j++;
		//if (j%10==0 || j==rr)
		{	
			x[j]=j*10;
			y[j] = pow(2.718,(-1)*x[j]*0.001)*(10*cos((3.1415/180)*x[j]));
		printf(". ");	
		fprintf(d,"%lf  %lf\n",x[j],y[j]);
		if (y[j]>b)
		{b=y[j];}
		}
	}
j--;
	escx = largcaixa/(x[j]);
	escy=  altcaixa/(2*b);	
	printf("%lf",b);
}

int main()
{


ARQUIVO = fopen("grafico.svg","w");
double qw;
tamanho();
caixa();

d = fopen("2233.txt","w");
fprintf(d,"x       y\n");
for(i=0;i<=j;i++){
	fprintf(d,"%lf  %lf\n",x[i],y[i]);}

		funcao();
fclose(d);

		
		
		pontos(x,y,j);



tracos(1,1);
fprintf(ARQUIVO,"</svg>");
fclose(ARQUIVO);



return 0;}