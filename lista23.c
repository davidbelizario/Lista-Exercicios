#include <stdio.h>
#include <stdlib.h>


int main(){
int a;
int b;
printf("Digite o numero de 3 digitos:");
scanf("%d", &a);
do
{
b= a%10;
printf("%d", b);
a= a/10;
} while (a>0);
printf("\n\n\n");
system("pause");
return(0);
}
