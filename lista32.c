#include <stdlib.h>
#include <stdio.h>

int main(){
float f, c;


printf("Digite a temperatura em graus Celsius:");
scanf("%f", &c);
f= ((9*c)+160)/5;
printf("A temperatura de celsius convertida para Fahrenheit eh: %.1f graus\n", f);
system("pause");
return(0);

}

