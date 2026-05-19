#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Informe sua idade: \n");
    scanf("%d", &idade);
    
    printf("Informa sua matricula: \n");
    scanf("%d", &matricula);
    
    printf("informa sua altura: \n");
    scanf("%f", &altura);
    
    printf("Informe seu nome: \n");
    scanf("%s", &nome);
    
    printf("Nome: %s \n Idade: %d \n Matricula: %d \n Altura: %f \n", nome, idade, matricula, altura);

    return 0;
}