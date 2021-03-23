#include <stdlib.h>
#include <stdio.h>


int main(){
float G, R, pi;
printf("Digite o valor do ângulo em radianos:");
scanf("%f", &R);
pi=3.141592;
G= R*(180/pi);
printf("o Valor convertido para graus eh: %.2f", G);
system("pause");
return(0);


}
