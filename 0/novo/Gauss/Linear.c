#include <stdio.h>
#include <math.h>


void mudar (char d,double Matriz[3][3],int a, int b)
{
	double copia[3];
	int i;
	if (d =='l'){ //mudar linha
	for (i=0;i<3;i++)
		copia[i]=Matriz[a][i];
	for (i=0;i<3;i++)
		Matriz[a][i]=Matriz[b][i];
	for (i=0;i<3;i++)
		Matriz[b][i]=copia[i]; }
	if (d =='c') //mudar coluna
	{for (i=0;i<3;i++)
		copia[i]=Matriz[i][a];
	for (i=0;i<3;i++)
		Matriz[i][a]=Matriz[i][b];
	for (i=0;i<3;i++)
		Matriz[i][b]=copia[i]; }	
}

void mprint(double Matriz[3][3]) //imprimir a matriz
{	int i,j;
	for (i=0;i<3;i++){
		for(j=0;j<3;j++)
			{printf("%.2f ", Matriz[i][j]);}
			 printf("\n");}
			 printf("\n");}


	void maior (double Matriz [3][3],int linha) //trocar o pivo para o maior a fim de evitar dividir por zero
		{
		int i,linhadomaior=linha;	double maIor;
		maIor = Matriz[linha][linha];
		for (i=linha+1;i<3;i++)
			if (Matriz[i][linha]>maIor)
				{maIor = Matriz[i][linha];
				linhadomaior = i;};
		if(linha != linhadomaior)
			{mudar('l',Matriz,linha,linhadomaior);}

	}
/////////////////////////////////////////////////////////////////////////////////////////////////
	void zerar (double a[3][3],int linha)
	{	int i,j; double m;
		for (i=linha;i<3;i++) //zerar linha
		{ 	m = a[i][i-1]/a[i-1][i-1]; printf("\n %f \n",m);
			for (j=0;j<3;j++)	
				{ a[i][j]=a[i][j]-m*a[i-1][j]; }
		}
	}

	void Gauss(double Matriz[3][3])
	{	int i;
		for (i=1;i<3;i++)
			{	printf("%d\n",i);
				//maior(Matriz,i);
				
				zerar(Matriz,i);
				mprint(Matriz);
			}
	}

int main()
{



double A[3][3] ={ {2,2,3},{4,5,6},{1,8,5}};


mprint(A);

Gauss(A);

mprint(A);

return 0;}
