#include <stdio.h>

int ALTURA,LARGURA,Mesq,Mdir,Mcm, Mbx,esp,az;
float escy,escx,xcr,ycr,altcaixa,largcaixa;
FILE *ARQUIVO;

void tamanho()
	{

	fprintf(ARQUIVO,"<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"%d\" height=\"%d\">\n",LARGURA,ALTURA);
		altcaixa = ALTURA-(Mbx+Mcm);
		largcaixa = LARGURA-(Mdir+Mesq);
	}
///////////////////////////////////////////////////////////

void caixa()
	{	
						fprintf(ARQUIVO,"<rect width=\"%.2f\" height=\"%.2f\" x=\"%d\" y=\"%d\" fill=\"transparent\" stroke=\"black\" stroke-width=\"4\"/> \n",largcaixa,altcaixa,Mesq,Mcm);
	}
///////////////////////////////////////////////////////////////////////




void tracos ()//(double ex,double ey)
	{	float a,b;
		int e,w;
		w = LARGURA-Mdir;
		a=(ALTURA-Mbx)-(0.015*altcaixa);
		b=(ALTURA-Mbx)+(0.015*altcaixa);
	for(e=Mesq;e<w;e++)
	{if(e%esp==0 & e!=Mesq)	
	{		
		fprintf(ARQUIVO,"<line x1=\"%d\" y1=\"%f\" x2=\"%d\" y2=\"%f\" stroke=\"rgb(0,0,0)\"/>\n",e,a,e,b);
		}
	}
	w= ALTURA-Mbx;
	a=Mesq-(0.015*altcaixa);
	b=Mesq+(0.015*altcaixa);
	for(e=Mcm;e<w;e++)
	{if(e%esp==0 & e!=Mesq)	
	{		
		fprintf(ARQUIVO,"<line x1=\"%f\" y1=\"%d\" x2=\"%f\" y2=\"%d\" stroke=\"rgb(0,0,0)\"/>\n",a,e,b,e);
		}
	}
}
////////////////===================================================================//////////////////////////




	pontos(double x[],double y[],int j)
{
		fprintf(ARQUIVO,"\n");
		int ii;
		float qq,ww;
		for(ii=0;ii<=j;ii++)		
			{	qq=x[ii]*escx+xcr;
				ww=ycr-escy*y[ii];

			if (qq>=Mesq && qq<=LARGURA-Mdir && ww>=Mcm && ww<=ALTURA-Mbx)
			{fprintf(ARQUIVO,"<circle cx=\"%f\" cy=\"%f\" r=\"2\" stroke=\"red\" fill=\"red\"/>\n",qq,ww);}
			}
}






////////////////////////////////////////////

	campvet(int j,double x[], double y[],double dx)
{	int ii;

	double C, xu,yu,xd,yd,coef;
	for (ii=0;ii<=j;ii++)
	{	coef =pow(2.71828,j);
			C=-2;
		if (ii%10==0){
		while (C<=2)	
				{

		xu = escx*(x[ii]-dx)+xcr;
		xd = escx*(x[ii]+dx)+xcr;
		if (xu>Mesq && xd<LARGURA-Mdir)	
			{
			yu = ycr-(coef*(-dx)+y[ii]+C)*escy;
			yd = ycr-(coef*(dx)+y[ii]+C)*escy;
	
	
			if(yu>Mcm && yu<ALTURA-Mbx && yd>Mcm && yd<ALTURA-Mbx)
				{fprintf(ARQUIVO, "<line x1=\"%f\" y1=\"%f\" x2=\"%f\" y2=\"%f\" stroke-width=\"1\" stroke=\"red\"/>\n",xu,yu,xd,yd);

	//		printf("<line x1=\"%f\" y1=\"%f\" x2=\"%f\" y2=\"%f\" stroke-width=\"1\" stroke=\"red\"/>\n",xu,yu,xd,yd);
				}

			}
		C+=0.1;		}
			   }
	}

}






////////////////////=========================================//////////////================//////////
#include "cor.h"
	
	//zcor (int j, double x[], double y[],double z[300][300])
	//zcor (int j, double x[], double y[],double z[2][2])
	zcor (int j, double x[], double y[], double z[100][100])
	{    	
		int ii,hh;
		double maximo,minimo;
		maximo = z[j][j];
		minimo = z[0][0];
		for (ii=0;ii<=j;ii++)
		{
		for (hh=0;hh<=j;hh++)
			{
				if(z[ii][hh]>maximo)
				{maximo=z[ii][hh];}
				if(z[ii][hh]<minimo)
				{minimo=z[ii][hh];}
			}
		}
		
	double f,k,l;	//((z[ii][hh]+z[ii+1][hh]+z[ii][hh+1]+z[ii+1][hh+1])/4)
	int cor;
	printf("%d\n",j);
	k = largcaixa/j; //largura do quadrado 	
	l = altcaixa/j;  //altura do quadrado
	f = (maximo-minimo)/255;
				printf("%f %f\n",k,l);
	for (ii=0;ii<j;ii++)	
	{for (hh=0;hh<j;hh++)
		{
		cor = corretangulo(f,(z[ii][hh]+z[ii+1][hh]+z[ii][hh+1]+z[ii+1][hh+1])/4,minimo);
		fprintf(ARQUIVO,"<rect width=\"%f\" height=\"%f\" x=\"%f\" y=\"%f\" fill=\"rgb(%d,%d,%d)\" stroke-width=\"0\"/> \n",k,l,(x[ii]*k)+xcr,ycr-(l*(1+y[hh])),cor,cor,cor);
		}
	}
				//printf("%.16f %.16f",l,k);
}



	

	
