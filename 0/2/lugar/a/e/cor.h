int corretangulo(float f, double zz,double minimo)


{
int aa,dd,ee,ww;
ee=0;
dd=128;
ww=0;
aa=0;
while (ee<=255){

	if (ee%2==0)
	{	if (zz>(minimo+dd*f) && zz<=(minimo+f*(dd+1)))
		{aa =(dd+1);
		break;}
		dd++;
	}
	else
	{
		if (zz>(minimo+f*ww) && zz<=(minimo+f*(ww+1)))
		{aa =(ww+1);
		break;}
		ww++;	
	}
	
	

	ee++;
};

return aa;
}