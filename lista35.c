#include <stdlib.h>
#include <stdio.h>

int main(){
float k, c;

printf("Digite a temperatura em celsius:");
scanf("%f", &c);
k=c+273;
printf("A temperatura de celsius convertida para graus kelvin eh: %.1f graus\n", k);
system("pause");
return(0);
}
