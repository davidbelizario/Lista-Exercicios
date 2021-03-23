#include <stdio.h>
#include <stdlib.h>

int main(){
float c;
float l;
float p;
float ara;
    printf("Digite o comprimento em metros:");
    scanf("%f", &c);
    printf("Digite a largura em metros:");
    scanf("%f", &l);
    p=(2*c + 2*l);
   printf("O perimetro eh: %.2f metros:\n", p);
   printf("Digite o preco do arame:");
    scanf("%f", &ara);
   printf("O custo total para cercar o terreno eh: %.2f reais\n", p*ara);




    system("pause");
    return 0;

}
