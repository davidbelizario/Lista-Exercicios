#include <stdlib.h>
#include <stdio.h>


int main(){
float P, C;
printf("Digite o valor de comprimento em polegadas:");
scanf("%f", &P);
C=P*2.54;
printf("o Valor convertido para centimetros eh: %.2f", C);
system("pause");
return(0);


}
