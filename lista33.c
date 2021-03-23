

#include <stdlib.h>
#include <stdio.h>

int main(){
float f, c;

printf("Digite a temperatura em Fahrenheit:");
scanf("%f", &f);
c= 5*(f-32)/9;
printf("A temperatura de Fahrenheit convertida para celsius eh: %.1f graus\n", c);
system("pause");
return(0);
}


