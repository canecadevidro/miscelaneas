#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include "e/caixa.h"

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
{	int i,b,a;
	ycr = (Mcm+(ALTURA-(Mcm+Mbx))/2);
	xcr = Mesq;
	j=0;
	a=0;
	b = LARGURA-Mdir;
	while(a<=500)
	{	//if (a%2==0)
		{
			x[j]=0.5*a;
			y[j] = pow(2.718281828,x[j]);
		j++;}
		a++;
	};
	
}

int main(){
ARQUIVO = fopen("eqw.svg","w");
double qw;

	/*tamanho();
fprintf(ARQUIVO,"<rect width=\"%d\" height=\"%d\" x=\"0\" y=\"0\" fill=\"blue\" stroke=\"black\" stroke-width=\"4\"/> \n",LARGURA,ALTURA);



		funcao();
	for(i=0;i<=j;i++)
	{if (i%2==0)
	{pontos(x[i],y[i]);}}
*/

caixa();
tracos(30,30);
fprintf(ARQUIVO,"</svg>");
fclose(ARQUIVO);

FILE *d;
d = fopen("valores.txt","w");
fprintf(d,"x       y\n");
for(i=0;i<=j;i++){
	fprintf(d,"%lf  %lf\n",x[i],y[i]);
}
fclose(d);


return 0;}