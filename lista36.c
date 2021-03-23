#include <stdlib.h>
#include <stdio.h>

int main(){
float km, ms;

printf("Digite a velocidade em KM/h:");
scanf("%f", &km);
ms=km/3.6;
printf("A velocidade em metros por segundo eh %.1fm/s\n", ms);
system("pause");
return(0);
}
