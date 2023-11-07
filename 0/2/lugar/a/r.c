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
double x[5000],y[5000];
int j,i;

void funcao()
{	int i,b,a;
	ycr = (Mcm+(ALTURA-(Mcm+Mbx))/2);
	xcr = Mesq;
	j=-1;
	b = LARGURA-Mdir;
	for(a=0;a<=500;a++)
	{	//if (a%2==0)
		{	j++;
			x[j]=a;
			y[j] = sqrt(x[j]);
		printf(". ");	
		fprintf(d,"%lf  %lf\n",x[j],y[j]);}
		
	}
	
}

int main(){
ARQUIVO = fopen("a.svg","w");
double qw;

	tamanho();
fprintf(ARQUIVO,"<rect width=\"%d\" height=\"%d\" x=\"0\" y=\"0\" fill=\"blue\" stroke=\"black\" stroke-width=\"4\"/> \n",LARGURA,ALTURA);


d = fopen("valores.txt","w");
fprintf(d,"x       y\n");
/*for(i=0;i<=j;i++){
	fprintf(d,"%lf  %lf\n",x[i],y[i]);*/


double hj;
		funcao();
fclose(d);

	for(i=0;i<=j;i++)
	{
	
	if(i%100==0 && x[i] !=0)
	
		{hj= 1/(2*sqrt(x[i]));
		campvet(hj,x[i],y[i],1); 
		}
	}


caixa();
tracos(1,1);
fprintf(ARQUIVO,"</svg>");
fclose(ARQUIVO);



return 0;}