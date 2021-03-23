#include <stdlib.h>
#include <stdio.h>


int main(){
float M, H;
printf("Digite o valor do em hectares:");
scanf("%f", &H);
M=H*10000;
printf("o Valor convertido para metros quadrados eh: %.2f", M);
system("pause");
return(0);


}
