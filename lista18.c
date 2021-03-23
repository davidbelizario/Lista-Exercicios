#include <stdio.h>
#include <stdlib.h>
int main(){
int a;
float b;
float s;
printf("Digite o numero de horas trabalhadas:");
scanf("%d", &a);
printf("Digite o valor hora:");
scanf("%f", &b);
s= (a*b);
s= (s*1.1);
printf("o salario liquido eh %.2f", s);


system("pause");
return (0);
}
