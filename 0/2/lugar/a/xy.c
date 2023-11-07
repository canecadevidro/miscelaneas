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
double x[10],y[10],z[10][10];
int j,i;

void funcao()
{	int ghj,b,a;
	ycr = (Mcm+(ALTURA-(Mcm+Mbx))/2);
	xcr = Mesq;
	j=0;
	b = LARGURA-Mdir;
	for(ghj=0;ghj<10;ghj++)
	{ 
		x[ghj] = ghj;
		for(i=0;i<10;i++)
		{y[i] = i;
		z[ghj][i] =ghj+i; //sin((x[ghj]/3)*M_PI/180)+cos((y[i]/3)*M_PI/180);
 
		fprintf(d,"%lf  %lf\n",x[ghj],y[j]);}
		
	}
	
}

int main(){
ARQUIVO = fopen("a.svg","w");
double qw;

	tamanho();


d = fopen("valores.txt","w");
fprintf(d,"x       y\n");
/*for(i=0;i<=j;i++){
	fprintf(d,"%lf  %lf\n",x[i],y[i]);*/


double hj;
		funcao();
fclose(d);

/*	for(i=0;i<=j;i++)
	{
	
	if(i%100==0 && x[i] !=0)
	
		{
		campvet(1/(2*sqrt(x[i])),x[i],y[i],1); 
		}
	}*/


caixa();
tracos(1,1);
fprintf(ARQUIVO,"</svg>");
fclose(ARQUIVO);



return 0;}