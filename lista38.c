#include <stdlib.h>
#include <stdio.h>

int main(){
float milhas, km;

printf("Digite a distancia em milhas:");
scanf("%f", &milhas);
km=1.61*milhas;
printf("A distancia em quilometros eh %.1f\n", km);
system("pause");
return(0);
}
