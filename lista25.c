#include <stdio.h>
#include <stdlib.h>

int main(){
    float seg;
    printf("Digite o valor em segundos: ");
    scanf("%f", &seg);
    printf("o Valor em minutos eh:%.2f min\n", seg/60);
    printf("o Valor em horas eh:%.2f h\n", (seg*0.01666667/60));


    system("pause");
    return 0;

}
