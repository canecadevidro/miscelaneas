#include <stdio.h>
#include <math.h> 
int raiz,ra;
  raiz =0;

double v[20], qzero, dx;



double mod(double p)
{
	if(p>0)
	{return p;}
	if (p<0)
	{return p*(-1);}
	if (p=0)
	{return 0;}


}




double f(double x)
{ 
    {return x*x-4*x+4;}
}

double fl(double x)
    {
    double u;
	
    u= 0.00000001;  
    return (f(x+u)-f(x))/u;
    }

double metodo (double x)
{   
    return x - (f(x)/(fl(x)));
}

void resultado(double a)
{
        
        if (raiz>0)
        {	int r,k;
    		k=0;
           	for(r=0; r<raiz;r++)
        	{	          			
		 	if ( (v[r]-a)<qzero && (v[r]-a)>-qzero )
				{k=1;
				
					if (mod(f(a))<mod(f(v[r])))
					{ //printf("a - %.30lf v[r] %.30lf\n",mod(a),mod(v[r]));
					v[r]=a;}	
				}    


               
           		 if ((v[r]-a)<0.1 && (v[r]-a)>-0.1)
			{k=1;
				if ( mod(f(a)) < mod( f(v[r]) ) )
				{
					v[r]=a;
				}	
			}
			
	
		}
			

		if (k!=1)
			{v[raiz] =a;
			raiz++;}

			
	
        }
	else if (raiz ==0)
        {   	v[raiz] =a;
		raiz++;
        }
}

equ()
{
	double a,b,c,d;
    int i;
    scanf("%lf %lf",&a,&b);
    d=a;
    do
      { c=d;

	  while (f(c)>qzero || f(c)<-qzero)
        { 
        
        
        if (c<a || c>b)
        	{break;}
	c =metodo(c);
	
         }
	if(f(c)<qzero && f(c)>-qzero)
        	{resultado(c);}
	
    	d = d+dx;
	
    }while(d<=b);

	printf("raizes\n");
    
	for(i=0;i<raiz;i++)
		{printf ("%.16lf\n",v[i]);}
}


int main()
{	qzero =	0.0000001;
	dx =0.01;
   	equ();
    	

return 0;
}