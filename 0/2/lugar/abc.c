#include <math.h>
#include <stdio.h>

double v[20];

double f(double x)
{
	double y;
	y = cos(x);
	return y;
}

void abc(double y)
{	
	 int y,k;
    k=0;
        double qqqq;
        if (raiz ==0)
        {   v[raiz] =a;
            raiz++;}

        if (raiz!=0)
        {
            for(y=0; y<raiz;y++)
            {
                if ((v[y]-a)<0.000000001 && (v[y]-a)>-0.000000001)
                   {k=1;}
               
            }
            if (k!=1)
            {v[raiz] =a;
             raiz++;}
        }  
}


int main()
{
	double a,b,c,d,e;
	int i;
	scanf("%lf %lf",&a, &b);	
	d=a;
	while (d<b || d==b)
	{	//c = f(d);
		c = cos(d);		
		if ( c < 0.0000001 && c > -0.0000001)
		//if (c==0)
		{abc(d);}
		d = d+0.00000001;
			
	}
	printf("raize(s)\n");
	for(i=0;i<raiz;i++)
	{printf("%.10lf\n",v[i]);
	}
 
 return 0;
}