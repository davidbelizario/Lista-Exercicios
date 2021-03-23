#include <stdlib.h>
#include <stdio.h>

int main(){
float k, c;

printf("Digite a temperatura em kelvin:");
scanf("%f", &k);
c=k-273;
printf("A temperatura de kelvin convertida para graus celsius eh: %.1f graus\n", c);
system("pause");
return(0);
}


