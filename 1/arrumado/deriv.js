var h;

function fact(f)
{
	if (f<2)
	 {return 1;}
	else {
	 var ff = f, s=1;
	  while (ff>1)
	   {
	    s=s*ff;
	    ff=ff-1;
	    }
	  return s;
	}
}
function b(x,y)
	{return fact(x)/(fact(y)*fact(x-y));}


function funcao(x)
{return 	Math.cos(x);	}

  h=0.000001;
function nderivada(x,n)
{
	var i,S;
	S=0;
	for (i=0;i<=n;i++)
	 {  S =S+ Math.pow(-1,i)*b(n,i)*funcao(x+(n-i)*h); ///**funcao***
	}
	return S/Math.pow(h,n);
}
function ST(x,xo)
{
var S,n,i;
n=20;
S=0;

for (i=0;<=n;i++)
{
S =S+   Math.pow(x,xo)*nderivada(xo,i)/fact(i);

}

return S;
}