#include <stdio.h>
#include <stdlib.h>

int main(){
float a;
float b;
printf("valor:");
scanf("%f", &a);
b=a;
a=a*3;
b=b*2;
a=a+1;
b=b-1;
printf("o valor final eh: %.2f\n", a+b);






system("pause");
return (0);
}
