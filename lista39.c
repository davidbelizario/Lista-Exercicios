#include <stdlib.h>
#include <stdio.h>

int main(){
float milhas, km;

printf("Digite a distancia em quilometros:");
scanf("%f", &km);
milhas=km/1.61;
printf("A distancia em milhas eh %.1f\n", milhas);
system("pause");
return(0);
}
