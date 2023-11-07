#include <stdio.h>
#include <math.h>
#include "e/caixa.h"



ALTURA = 800;
LARGURA = 1000;
Mesq = 100;
Mdir = 200;
Mcm = 100;
Mbx = 100;
esp = 800/4;
int main()
{
//FILE *ARQUIVO;
ARQUIVO = fopen("eeeeeeeee.svg","w");
caixa();
tracos();

fprintf(ARQUIVO,"\n</svg>");
fclose(ARQUIVO);

return 0;}