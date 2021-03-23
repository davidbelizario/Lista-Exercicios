#include <stdio.h>
#include <stdlib.h>

int main(){
float a;
float b;
float c;
float d;
float e;

printf ("Digite as 4 medias:");
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);
scanf("%f", &d);
e= (a+b+c+d)/4;
printf ("A media das 4 notas eh %.2f\n", e);






system("pause");
return (0);
}
