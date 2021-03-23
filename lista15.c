#include <stdio.h>
#include <stdlib.h>
int main(){
float a;
printf("Digite o valor do salario:");
scanf("%f", &a);
a= (a* 1.25);
printf("o valor final com desconto eh %.2f", a);



system("pause");
return (0);
}
