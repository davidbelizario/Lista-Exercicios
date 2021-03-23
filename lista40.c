#include <stdlib.h>
#include <stdio.h>


int main(){
float G, R, pi;
printf("Digite o valor do ângulo em graus:");
scanf("%f", &G);
pi=3.141592;
R= G*(pi/180);
printf("o Valor convertido para radianos eh: %.2f", R);
system("pause");
return(0);


}
