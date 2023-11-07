#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include "a/e/caixa.h"
FILE *d,*dados;
ALTURA=600;
LARGURA=1000;
Mdir=100;
Mesq=100;
Mcm=100;
Mbx=50;
esp=100;
float xcr,ycr;
double x[1001],y[1001];
int j,i;


	
double  achar()
{
	int h;
	double n;
	n=y[500];	
	for (h=0;h<=1000;h++)
	{if (y[i]>n)
		{n=y[i];}}
return n;

}

void ler()
{

int h;

for (h=0;h<=1000;h++)
{fscanf(dados,"%lf",&x[h]);}

for (h=0;h<=1000;h++)
{fscanf(dados,"%lf",&y[h]);}

}


int main()
{


ARQUIVO = fopen("graficoed.svg","w");
double qw;
tamanho();
caixa();

dados =fopen("dadosed.txt","r");

ler();
fclose(dados);


xcr=Mesq;
ycr=ALTURA-Mbx;
escx=largcaixa/x[500];



escy=altcaixa/(achar()*1.2);


d = fopen("321.txt","w");
fprintf(d,"x       y\n");
for(i=0;i<=1000;i++){
	fprintf(d,"%lf    %lf\n",x[i],y[i]);}

		
fclose(d);
printf(" %lf %lf",x[780],y[780]);
		
		
		pontos(x,y,1000);



tracos(1,1);
fprintf(ARQUIVO,"</svg>");
fclose(ARQUIVO);



return 0;}