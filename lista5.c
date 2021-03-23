#include <stdio.h>
#include <stdlib.h>

int main(){
float a;
float b;
float c;
float d;

printf ("Digite 3 valores:");
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);
a= a*a;
b= b*b;
c= c*c;
d= a+b+c;
printf ("A soma dos 3 valores eh %.2f", d);






system("pause");
return (0);
}
