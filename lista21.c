#include <stdio.h>
#include <stdlib.h>
int main(){
float a, b, c;

printf("Digite o valor do degrau:");
scanf("%f", &a);

printf("Digite o valor da altura que deseja alcançar:");
scanf("%f", &b);
c=b/a;

printf("o valor de degraus que o usuario precisara subir eh %.2f\n", c);



system("pause");
return (0);
}
