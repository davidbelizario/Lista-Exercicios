#include <stdlib.h>
#include <stdio.h>


int main(){
float L, M;
printf("Digite o valor em litros:");
scanf("%f", &L);
M=L/1000;
printf("o Valor convertido para metros cubicos eh: %.2f", M);
system("pause");
return(0);


}
