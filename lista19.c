#include <stdio.h>
#include <stdlib.h>
int main(){
float a;
float b;
float s;
printf("Digite o salario base:");
scanf("%f", &a);
a= a*1.05;
a= a*0.93;
printf("o salario a receber eh %.2f\n", a);


system("pause");
return (0);
}
