#include <stdio.h>
#include <stdlib.h>

int main(){
float amg1, amg2, amg3;
float pc1, pc2, pc3;
float total, premio;
    printf("Digite o valor pago pelo primeiro amigo:");
    scanf("%f", &amg1);
     printf("Digite o valor pago pelo segundo amigo:");
    scanf("%f", &amg2);
     printf("Digite o valor pago pelo terceiro amigo:");
    scanf("%f", &amg3);
total= amg1+amg2+amg3;
pc1=amg1/total;
pc2=amg2/total;
pc3=amg3/total;
 printf("Digite o valor do premio:");
 scanf("%f", &premio);
printf("O valor recebido pelo amigo 1 eh: %.2f\n", premio*pc1);
printf("O valor recebido pelo amigo 2 eh: %.2f\n", premio*pc2);
printf("O valor recebido pelo amigo 3 eh: %.2f\n", premio*pc3);
system("pause");
return 0;

}
