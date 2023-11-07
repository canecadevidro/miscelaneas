
	var delta,T,mo,k;
	
	mo = [-8.3204464837497,6.6832105275932,3.00632,0.012436,0.97315,1.27950,0.96956,0.24873];
	k = [0,0,0,1.28728967,3.53734222,7.74073708,9.24437796,27.5075105];

function phio(rho,temp)
{	var i,somatorio;
	delta = rho/322;
	T = 647.096/temp;
	somatorio = 0;
	for (i=3;i<8;i++)
		{somatorio = somatorio + mo[i]*Math.log(1-Math.exp((-1)*k[i]*T));}
	var x=Math.log(delta)+mo[0]+mo[1]*T+mo[2]*Math.log(T)+somatorio;
	return x;
}

var c,mr,dr,tr,Cr,Dr;

c= [0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,4,6,6,6,6,0,0,0];
dr=[1,1,1,2,2,3,4,1,1,1,2,2,3,4,4,5,7,9,10,11,13,15,1,2,2,2,3,4,4,4,5,6,6,7,9,9,9,9,9,10,10,12,3,4,4,5,14,3,6,6,6,3,3,3];
tr=[-0.5,0.875,1,0.5,0.75,0.375,1,4,6,12,1,5,4,2,13,9,3,4,11,4,13,1,7,1,9,10,10,3,7,10,10,6,10,10,1,2,3,4,8,6,9,8,16,22,23,23,10,50,44,46,50,0,1,4];
mr=[0.012533547935523,7.8957634722828,-8.7803203303561,0.31802509345418,-0.26145533859358,-0.0078199751687981,0.0088089493102134,-0.66856572307965,0.20433810950965,-0.000066212605039687,-0.19232721156002,-0.25709043003438,0.16074868486251,-0.040092828952807,0.00000039343422603254,-0.0000075941377088144,0.00056250979351888,-0.000015608652257135,0.0000000011537996422951,0.00000036582165144204,-0.0000000000013251180074668,-0.00000000062639586912454,-0.10793600908932,0.017611491008752,0.22132295167546,-0.40247669763528,0.58083399985759,0.0049969146990806,-0.031358700712549,-0.74315929710341,0.47807329915480,0.020527940895948,-0.13636435110343,0.014180634400617,0.0083326504880713,-0.029052336009585,0.038615085574206,-0.020393486513704,-0.0016554050063734,0.0019955571979541,0.00015870308324157,-0.000016388568342530,0.043613615723811,0.034994005463765,-0.076788197844621,0.022446277332006,-0.000062689710414685,-0.00000000055711118565645,-0.19905718354408,0.31777497330738,-0.11841182425981,-31.306260323435,31.546140237781,-2521.3154341695,-0.14874640856724,0.31806110878444];


ber=new Array(55)

ber[51]=150;
ber[52]=150;
ber[53]=250;

br=new Array(55)


br[54]=0.85;
br[55]=0.95;
kr=new Array(55)
kr[51]=1.21;
kr[52]=1.21;
kr[53]=1.25;

Cr=new Array(55);
Dr=new Array(55);
Cr[54]=28;
Cr[55]=32;
Dr[54]=700;
Dr[55]=800;


function phir(rho,temp)
{
	var somatorio,i,delta;
	somatorio =0;
	delta = rho/322;
	T = 647.096/temp;
				
	for(i=0;i<7;i++)
	{
		somatorio =somatorio+ mr[i] * Math.pow(delta,dr[i]) * Math.pow(T,tr[i]);
				}
			
	for (i=7;i<51;i++)
	{
		somatorio =somatorio+mr[i]*( Math.pow(delta,dr[i])*Math.pow(T,tr[i]) )/Math.exp(Math.pow(delta,c[i]));
						
}
				

	for (i=51;i<54;i++)
	{
		somatorio =somatorio+mr[i]*Math.pow(delta,dr[i])*Math.pow(T,tr[i])*Math.exp(-20*((delta-1)*(delta-1)) - ber[i]*( (T-kr[i])*(T-kr[i]) ) );

	}				
	var DELTA,th,J;
	for (i=54;i<56;i++)
	{	
		th = (1-T)+0.32*Math.pow((delta-1)*(delta-1),(1/0.6));
		DELTA = th*th+(0.2*Math.pow( (delta-1)*(delta-1) , 3.5) );
		J = Math.exp((-1)*Cr[i]*(delta-1)*(delta-1) - Dr[i]*(T-1)*(T-1));
		

		somatorio =somatorio +mr[i] * Math.pow(DELTA,br[i]) *delta * J;
	}					
	return somatorio;
}




function F(densidade, temperatura)
{	

	return 0.46151805*temperatura*(phio(densidade,temperatura)+phir(densidade,temperatura));
}


function dprd(d,temp)
{		
	var dervd,h;
	h=0.0000001;
	dervd = ( phir(d+h,temp)-phir(d,temp) ) / h;

	return dervd*322;
}
function dpod(d,temp)
{	
	var dervd,h;
	h=0.0000001; //rever
	dervd = ( phor(d+h,temp)-phor(d,temp) ) / h;
	return dervd*322;
}

function dprt(d,temp)
{		
	var dervd,h,delta,T;
	h=0.00001;
	delta = d/322;
	T = 647.096/temp;
	
	dervd = ( phir(d,temp+h)-phir(d,temp) ) / h;

	return (dervd*647.096)*(-1)/(T*T);
}

function dpot(d,temp)
{
	var dervd,h,delta,T;
	h=0.00001;
	delta = d/322;
	T = 647.096/temp;
	
	dervd = ( phio(d,temp+h)-phio(d,temp) ) / h;

	return (dervd*647.096)*(-1)/(T*T);

}


function pressao(d,temp)//Retorna em MPa;
{		
	var h,delta;
	delta = d/322;
	h=0.00001;
	return ((dprd(d,temp)*delta)*d*temp*0.46151805+d*temp*0.46151805)/1000000;
}

function enrgint(d,temp)//Retorna em kJ
{
	T = 647.096/temp;
	return 0.46151805*T*temp*(dpot(d,temp)+dprt(d,temp));
}
