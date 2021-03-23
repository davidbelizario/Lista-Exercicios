#include <stdlib.h>
#include <stdio.h>


int main(){
float L, M;
printf("Digite o valor do volume em metros cubicos:");
scanf("%f", &M);
L=1000*M;
printf("o Valor convertido para litros eh: %.2f", L);
system("pause");
return(0);


}
