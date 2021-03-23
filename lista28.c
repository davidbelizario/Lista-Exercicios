#include <stdio.h>
#include <stdlib.h>

int main(){
float nota1, nota2, nota3;
float media;
int mat;
    printf("Digite o numero de matricula:");
    scanf("%d", &mat);
    printf("Digite as notas:");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);
media= (nota1+nota2+nota3*2)/4;
 printf("A media final do aluno da matricula %d eh: %.2f\n", mat, media);
 if (media>6){
 printf ("Aluno aprovado\n");
} else{
 printf ("Aluno reprovado\n");
 }

    system("pause");
    return 0;

}
