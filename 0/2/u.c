#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include "e\caixa.h"

FILE *d;

ALTURA=600;
LARGURA=1000;
Mdir=100;
Mesq=100;
Mcm=100;
Mbx=50;
esp=100;
az = 99;
	int j,i,rr;

double x[100],y[100];
//double z[100][100];
void funcao ()
{	int aa,bb;
	ycr = Mcm+altcaixa;
	xcr = Mesq;
	j=-1;
	rr=-1;
	for(aa=0;aa<=az;aa++)
	{	x[aa]=aa;
		j++;
		for(bb=0;bb<=az;bb++)
		{				
			y[bb] = bb;
			z[aa][bb]= aa*aa;
			
		printf(". ");		
			
		fprintf(d,"%2.1lf  %2.1lf %2.1lf\n",x[aa],y[bb],z[aa][bb]);}
						
	}
}


int main(){


ARQUIVO = fopen("32.svg","w");
double qw;
tamanho();

d = fopen("54.txt","w");
fprintf(d,"x        y          z\n");
/*for(i=0;i<=j;i++){
	fprintf(d,"%lf  %lf\n",x[i],y[i]);*/



		funcao();
fclose(d);

	zcor(j,x,y,z);


caixa();
tracos(1,1);
fprintf(ARQUIVO,"</svg>");
fclose(ARQUIVO);



return 0;}