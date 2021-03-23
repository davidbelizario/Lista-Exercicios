#include <stdio.h>
#include <stdlib.h>
int main(){
float a, b, c, d;


printf("Digite o valor total:");
scanf("%f", &a);

b= a*0.9;
printf("O valor com desconto eh: %.2f\n", b);

c= a/3;
printf("o valor da parcela eh: %.2f\n", c);

printf("o valor da comissao de venda a vista eh: %.2f\n", b*0.05);
printf("o valor da comissao de venda parcelada eh: %.2f\n", a*0.05);



system("pause");
return (0);
}
