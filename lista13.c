#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
float a;
float b;
float c;
float v;
printf("Digite os valor da altura:");
scanf ("%f", &a);
printf("Digite os valor do raio:");
scanf ("%f", &b);
v = (b*b) * 3.141592 * a;
printf("o valor do volume eh %.2f", v);


system("pause");
return (0);
}
