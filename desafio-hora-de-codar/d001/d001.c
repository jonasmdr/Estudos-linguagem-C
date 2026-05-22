#include <stdio.h>

int main(){

    float nota1, nota2, nota3, nota4;
    float media;

    printf("*** Programa de calculo de media ***\n");

    printf("Digite sua primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite sua segunda nota: \n");
    scanf("%f", &nota2);

    printf("Digite sua terceira nota: \n");
    scanf("%f", &nota3);

    printf("Digite sua quarta nota: \n");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("Sua media e: %.1f\n", media);



    return 0;
}