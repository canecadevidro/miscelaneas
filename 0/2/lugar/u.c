#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>



int main(){

int i,a;
double y[400],x[400],e;
FILE *qwe = fopen("q.svg","w");
fprintf(qwe,"<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"1000\" height=\"400\">\n<line x1=\"100\" y1=\"0\" x2=\"100\" y2=\"400\" stroke=\"rgb(0,0,0)\"/>\n<line x1=\"0\" y1=\"300\" x2=\"1000\" y2=\"300\" stroke=\"rgb(0,0,0)\"/>\n");

for ( i=0; i <900; i++)
  {if (i%10 == 0 )
	{fprintf(qwe,"<line x1=\"%d\" y1=\"296\" x2=\"%d\" y2=\"304\" stroke=\"rgb(0,0,0)\"/>\n",i,i);
	
	if (i%100 == 0 )
	{fprintf(qwe,"<line x1=\"%d\" y1=\"292\" x2=\"%d\" y2=\"308\" stroke=\"black\"/>\n",i,i);}
	}
}	
	fprintf(qwe,"\n");
	for (i=0;i<=200;i++)
	{	x[i] =50*i;
		y[i] = 300-50*sin((x[i]-100)*M_PI/180);
		fprintf(qwe,"<circle cx=\"%f\" cy=\"%f\" r=\"0.5\" stroke=\"red\" fill=\"red\"/>\n",x[i],y[i]);
	}
	/*for ( i=0; i <900; i++)
	{a = i-7;
	e= (i-100)*M_PI/180;	 
	if(abs((i-100)/(M_PI/2))>0.00000001 && e>0 && i%20==0)
	{fprintf(qwe,"<text font-family=\"PT MONO\" x=\"%d\" y=\"320\" font-size=\"6\" fill=\"black\">%.2f</text>",a,e);}
	}*/
	
fprintf(qwe,"</svg>");

fclose(qwe);



return 0;}