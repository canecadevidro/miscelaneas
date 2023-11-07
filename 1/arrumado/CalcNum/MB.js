

var xo;
b=[10];
a=[-10];
n=[0];
zero = 0.0001;


function Bisseccao(){
		i=0;

if( Math.sign(f(a[i])*f(b[i]))<0){
	xo =b[0];
	while (Math.abs( f(xo) )>=zero)
	  {
	if (Math.sign( f(a[i])*f(b[i]) )<0)
		{
		console.log("xo= ",xo);
		console.log("b= ",a[i]);
		console.log("a= ",b[i]);
		xo = (b[i]+a[i])/2;
		}

	if ( Math.sign( f(a[i])*f(xo) )<0 )
		{b[i+1] = xo;
		a[i+1] = a[i];}
	
	else if ( Math.sign( f(a[i])*f(xo) ) >0 )
		{a[i+1] = xo;
	b[i+1]=b[i];}
	n[i]=i;
	i++;
	  }
	
			

	console.log("xo= ",xo);
	document.write ("xo= ",xo);
	}
else if(f(xo)<=zero)
	{document.write ("xo= ",xo);}

else if(Math.sign(f(a[i])*f(b[i]))>0)
	{document.write ("Math.sign(f(a[i])*f(b[i])>0");}

}