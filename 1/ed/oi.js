var Largura,n, Altura,larg,alt,mesq,mdir,mc,mb,xesc,yesc,zero;


	function iniciar()
{
	document.write("<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"",larg,"\" height=\"",alt,"\">");	
	Largura = larg-(mdir+mesq);
	Altura = alt-(mc+mb);
	document.write("<rect x=\"",mesq,"\" y=\"",mc,"\" width=\"",Largura,"\" height=\"",Altura,"\" stroke-width=\"2\" fill=\"none\" stroke=\"black\"></rect>");




}

	function f(u,x,y)
{
	var p;
	for (p=0;p<u;p++)
	{		x[p]=p;
	 		y[p]=Math.exp(p*Math.PI/180)*Math.cos(p*Math.PI/180);
		
	}	

}
	function pontos(px,py)
	{	var i,quant,Xmax,Ymax,Xmin,Ymin,valor;
		
	
		quant = px.length;
		Xmax=px[quant-1];
		Xmin=px[0];
		Ymax=py[quant-1];
		Ymin=py[0]
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
		yesc = Altura/((Ymax-Ymin));
		zero=alt-(mb-yesc*Ymin);
		var i;
	console.log(quant)
		for(i=0;i<quant;i++)	{
		document.write("<circle cx=\"",mesq+xesc*px[i],"\" cy=\"",zero-yesc*py[i],"\" r=\"1\" fill=\"red\"></circle>");
					}

	}
//\"",,"\"
	function fim()
	{
document.write("</svg>");
	}



	function tracos(q,w)
	{

	
	var px,py,arrumar;
	py= Array(n);
	px= Array(n);	
	
	py=w;	
	px=q;
	py.sort();
	px.sort();
	var qt,i,aaa,eee,y1,x1;
	qt=10;
	y1 = mc+Altura;
	x1 = mesq+Largura;
	eee = Altura/qt;
	aaa=Largura/qt;
	ordenar(px);
	ordenar(py);
	
	for (i=0;i<=qt;i++){
	document.write("<line x1=\"",mesq+i*aaa,"\" x2=\"",mesq+i*aaa,"\" y1=\"",y1,"\" y2=\"",mc,"\" stroke=\"gray\"></line>");
	document.write("<text font-family=\"PT Mono\"  x=\"",mesq-4+i*aaa,"\" y=\"",y1+16,"\">",(Largura*i/(xesc*qt)).toPrecision(4),"</text>");}


	for (i=0;i<=qt;i++){
	document.write("<line x1=\"",x1,"\" x2=\"",mesq,"\" y1=\"",mc+i*eee,"\" y2=\"",mc+i*eee,"\" stroke=\"gray\"></line>");
	document.write("<text font-family=\"PT Mono\" x=\"",x1+8,"\" y=\"",mc+(qt-i)*eee,"\">",(((Altura*i)/(yesc*qt))-(alt-mb-zero)/yesc).toPrecision(3),"</text>");
	}}
	
	function titulo (nome)
	{
	document.write("<text font-size=\"",Math.round(mc/2),"\" font-family=\"PT Mono\" x=\"",mesq+80,"\" text-length=\"",Largura,"\" y=\"",mc/2,"\">",nome,"</text>");

	}
	function legenday(ly)
	{
	document.write("<text transform=\"rotate(270 ",mesq/2,",",alt*0.5,")\" font-size=\"",Math.round(mc/2),"\" font-family=\"PT Mono\" 	x=\"",mesq/2,"\" text-length=\"",Largura,"\" y=\"",alt*0.5,"\">",ly,"</text>");

	}

	function legendax(lx)
	{
	document.write("<text  font-size=\"",Math.round(mc/2),"\" font-family=\"PT Mono\" 	x=\"",mesq-50+Largura/2,"\" text-length=\"",Largura,"\" y=\"",alt-mb/5,"\">",lx,"</text>");

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

