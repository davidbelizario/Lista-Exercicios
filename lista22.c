#include <stdio.h>
#include <stdlib.h>

void conversao(char *letra);

int main(){
char letra;
printf ("Digite a letra:");
scanf("%c", &letra);
conversao(&letra);
printf ("a letra convertida eh %c", letra);
system("pause");
return(0);
}

void conversao (char *letra){
if (*letra>=65 && *letra<=90){
    (*letra+=32);
}

}
