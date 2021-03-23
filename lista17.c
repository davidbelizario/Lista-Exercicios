#include <stdio.h>
#include <stdlib.h>
int main(){
int a;
float s;
printf("Digite o numero de dias trabalhados:");
scanf("%d", &a);
s= (a* 30);
s= (s*0.92);
printf("o salario liquido eh %.2f", s);


system("pause");
return (0);
}
