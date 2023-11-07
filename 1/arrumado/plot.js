
////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////

// LEMBRETE: SOBRE O "new.Array" e o código!!

////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////

var Largura,n, Altura,larg,alt,mesq,mdir,mc,mb,xesc,yesc,zerox,zeroy;

///////////////////////////////////////////////////////////////
alt=500;
larg=600;
mesq=20;
mdir=80;
mc=40;
mb=60;
///////////////////////////////////////////////////////////////

	function iniciar()
{
	document.write("<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"",larg,"\" height=\"",alt,"\">");	
	Largura = larg-(mdir+mesq);
	Altura = alt-(mc+mb);
	document.write("<rect x=\"",mesq,"\" y=\"",mc,"\" width=\"",Largura,"\" height=\"",Altura,"\" stroke-width=\"2\" fill=\"none\" stroke=\"black\"></rect>");
}

	function f(x,y)
{
	var p,i;
	p=inicio;
	i=0;

	while(p<final)
	{
	x[i]=p;
	y[i]= Math.exp(-p/50)*(0.02+p);
	
	 	
		i++;
		p=p+inter;
	}	

}
	function pontos(px,py,cor)
	{	var i,quant,Xmax,Ymax,Xmin,Ymin,valor;
		
	
		quant = px.length;
		Xmax=px[quant-1];
		Xmin=px[0];
		Ymax=py[quant-1];
		Ymin=py[0];
		for(i=0;i<quant;i++){
			if(px[i]>Xmax)
			{Xmax=px[i];}	}		
		for(i=0;i<quant;i++){
			if(py[i]>Ymax)
			{Ymax=py[i];}	}		
		for(i=0;i<quant;i++){
			if(px[i]<Xmin)
			{Xmin=px[i];}	}	
		for(i=0;i<quant;i++){
			if(py[i]<Ymin)
			{Ymin=py[i];}	
					}
		
	console.log(Ymin);
	console.log(Xmin);
	console.log(Ymax);
	console.log(Xmax);
		xesc = Largura/(Xmax-Xmin);
		if((Ymax-Ymin)!=0){
		yesc = Altura/((Ymax-Ymin));}
		else
		{yesc=1;}
		zerox= mesq-(xesc*Xmin);		
		zeroy=alt-(mb-yesc*Ymin);
		var i;
	console.log(quant)
		for(i=0;i<quant;i++)	{
		document.write("<circle cx=\"",zerox+xesc*px[i],"\" cy=\"",zeroy-yesc*py[i],"\" r=\"1\" fill=\"",cor,"\"></circle>");
					}

	}
//\"",,"\"
	function fim()
	{
document.write("</svg>");
	}


function copiar(ba,ab)
	{
		for (i=0;i<ab.length;i++)
		{ba[i] = ab[i];}
	}



function tracos(q,w,valorx,valory,tam)
	{

	
	var px,py,arrumar;
	px = Array(q.length);
	py = Array(w.length);
	copiar(py,w);
	copiar(px,q);

	var qt,i,aaa,eee,y1,x1;
	qt=10;
	y1 = mc+Altura;
	x1 = mesq+Largura;
	eee = Altura/qt;
	aaa=Largura/qt;
	ordenar(px);
	ordenar(py);
	if (valorx == 1){
	for (i=0;i<=qt;i++){
	document.write("<text font-family=\"PT Mono\"  x=\"",mesq-4+i*aaa,"\" y=\"",y1+16,"\" font-size=\"",tam,"\" >",(Largura*i/(xesc*qt)+(mesq-zerox)/xesc).toFixed(2),"</text>");
	   	 	   } }
	if(valory == 1) {
 	for (i=0;i<=qt;i++){
	document.write("<text font-family=\"PT Mono\" x=\"",x1+8,"\" y=\"",mc+(qt-i)*eee,"\" font-size=\"",tam,"\" >",(((Altura*i)/(yesc*qt))-(alt-mb-zeroy)/yesc).toExponential(3),"</text>");
	   	 	   } }
	for (i=1;i<qt;i++){
	document.write("<line x1=\"",mesq+i*aaa,"\" x2=\"",mesq+i*aaa,"\" y1=\"",y1,"\" y2=\"",mc,"\" stroke=\"gray\"></line>");
	document.write("<line x1=\"",x1,"\" x2=\"",mesq,"\" y1=\"",mc+i*eee,"\" y2=\"",mc+i*eee,"\" stroke=\"gray\"></line>");
	


}}
	
	function titulo (nome,tam)
	{
	document.write("<text font-size=\"",tam,"\" font-family=\"PT Mono\" x=\"",mesq+80,"\" text-length=\"",Largura,"\" y=\"",mc/2,"\">",nome,"</text>");

	}
	function legenday(ly,tam)
	{
	document.write("<text transform=\"rotate(270 ",mesq/2,",",alt*0.5,")\" font-size=\"",tam,"\" font-family=\"PT Mono\" 	x=\"",mesq/2,"\" text-length=\"",Largura,"\" y=\"",alt*0.5,"\">",ly,"</text>");

	}

	function legendax(lx,tam)
	{
	document.write("<text  font-size=\"",tam,"\" font-family=\"PT Mono\" 	x=\"",mesq-50+Largura/2,"\" text-length=\"",Largura,"\" y=\"",alt-mb/5,"\">",lx,"</text>");

	}


	function ordenar(conj)
	{
		var quant,menor,numero,h,j;
		quant = conj.length;
	
		for (j=0;j<quant;j++)
		{	menor = conj[j];
			numero = j;
			for (h=j+1;h<quant;h++)
	  		{	
				if(conj[h]<menor)
				{menor = conj[h];
				 numero =h;}	
		
	 		}
			conj[numero] = conj[j];
			conj[j]=menor;
	 	}		
	
	

	}


function lpont (px,py,ccor)
{
	var i,quant,Xmax,Ymax,Xmin,Ymin,valor;
		
	
		quant = px.length;
		Xmax=px[quant-1];
		Xmin=px[0];
		Ymax=py[quant-1];
		Ymin=py[0];
		for(i=0;i<quant;i++){
			if(px[i]>Xmax)
			{Xmax=px[i];}	}		
		for(i=0;i<quant;i++){
			if(py[i]>Ymax)
			{Ymax=py[i];}	}		
		for(i=0;i<quant;i++){
			if(px[i]<Xmin)
			{Xmin=px[i];}	}	
		for(i=0;i<quant;i++){
			if(py[i]<Ymin)
			{Ymin=py[i];}	
					}
		
	console.log(Ymin);
	console.log(Xmin);
	console.log(Ymax);
	console.log(Xmax);
		xesc = Largura/(Xmax-Xmin);
		if((Ymax-Ymin)!=0){
		yesc = Altura/((Ymax-Ymin));}
		else
		{yesc=1;}
		zerox= mesq-(xesc*Xmin);		
		zeroy=alt-(mb-yesc*Ymin);
	
	var j;
	document.write("<polyline fill=\"none\" stroke=\"",ccor,"\" stroke-width=\"2\" points=\"");
	for (j=0;j<px.length;j++)
	{
	document.write(zerox+xesc*px[j]	, "," ,zeroy-yesc*py[j], " " );
	}

	document.write("\"/>");

}
//----------

/*////////////////////////////

alt=450;
larg=700;
mesq=40;
mdir=150;
mc=50;
mb=80;
var a,b;
var inicio,inter,final;
			inicio	=0;
			final 	=501;
			inter 	=5;
n=Math.round((final-inicio)/inter);
a = Array(n);
b = Array (n);	
////////////////////////////

iniciar();
f(a,b);




lpont(a,b,"blue");
tracos(a,b,1,10); //numeros muito grandes
ww(a,b);
lpont(a,b,"orange");
titulo("Gráfico",25);
legendax("X",20);
legenday("Y",20);
fim();
////////////////////////////*/