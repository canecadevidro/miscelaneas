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
double x[2000],y[2000];
int j,i;

void funcao()
{	int i,a,b,rr;
	ycr = Mcm+altcaixa/2;
	xcr = Mesq;
	j=-1;
	b=0;
	rr=1500;
	for(a=0;a<=rr;a++)
	{	j++;
		if (j%10==0 || j==rr)
		{	
			x[j]=a;
			y[j] = cos(x[j]*(M_PI/180));
		printf(". ");	
		fprintf(d,"%lf  %lf\n",x[j],y[j]);}
		if (y[j]>b)
		{b=y[j];}				
	}
	escx = (largcaixa/x[rr]);
	escy = ((altcaixa/b))/2;
}

int main(){
ARQUIVO = fopen("32.svg","w");
double qw;

caixa();

d = fopen("2233.txt","w");
fprintf(d,"x       y\n");
/*for(i=0;i<=j;i++){
	fprintf(d,"%lf  %lf\n",x[i],y[i]);*/


double hj;
		funcao();
fclose(d);

	for(i=0;i<=j;i++)
	{	
		pontos(x,y,j);
	}	




/*{
	
	if(i%100==0 && x[i] !=0)
	
		{hj= 1/(2*sqrt(x[i]));
		campvet(hj,x[i],y[i],1); 
		}
	}*/


tracos(1,1);
fprintf(ARQUIVO,"</svg>");
fclose(ARQUIVO);



return 0;}