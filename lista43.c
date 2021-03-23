#include <stdlib.h>
#include <stdio.h>


int main(){
float P, C;
printf("Digite o valor de comprimento em centimetros:");
scanf("%f", &C);
P=C/2.54;
printf("o Valor convertido para polegadas eh: %.2f", P);
system("pause");
return(0);


}
