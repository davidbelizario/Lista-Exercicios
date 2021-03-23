#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
float a;
float b;
float c;
printf("Digite os valores dos 2 catetos do triangulo:");
scanf ("%f", &a);
scanf ("%f", &b);
c= sqrt((a*a)+(b*b));
printf("o valor da hipotenusa eh:%.2f", c);




system("pause");
return (0);
}
