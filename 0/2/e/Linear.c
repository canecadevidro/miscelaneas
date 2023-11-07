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

	void zerar (double a[3][3],int linha)
	{	int i,j; double aiii;
		for (i=linha;i<2;i++)
		{ aiii = a[i+1][i];
		for (j=0;j<3;j++)	
			a[i+1][j]=a[i+1][j]-a[i][j]*aiii/a[i][i]; }
	}

	void Gauss(double Matriz[3][3])
	{	int i;
		for (i=0;i<2;i++)
			{	printf("%d\n",i);
				maior(Matriz,i);
				
				zerar(Matriz,i);
				mprint(Matriz);
			}
	}

int main()
{



double A[3][3] ={ {10,5,3},{6,8,2},{4,5,9}};


mprint(A);

Gauss(A);

mprint(A);

return 0;}
