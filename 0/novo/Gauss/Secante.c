#include <stdio.h>
#include <math.h>
float f(float p)
    {
        return exp(cos(p))-2;
    }


int main()
{
int i;
float x[55];
x[0]=0; x[1]=1;
for (i=1;i<50;i++){
x[i+1] = x[i]-(x[i]-x[i-1])*f(x[i])/(f(x[i])- f(x[i-1]) );
printf("%f\t%lf\n", x[i],f(x[i]));
    if (fabs(f(x[i]))<0.001)
        break;
}
return 0;}