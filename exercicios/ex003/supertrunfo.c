#include <stdio.h>

int main(){
    int card1, card2, pop1, pop2, npt1, npt2;
    float pib1, pib2, area1, area2;
    char est1, est2;
    char cod1[50], cod2[50], cid1[50], cid2[50];

    printf("Numero da carta: \n");
    scanf("%d", &card1);

    printf("Estado: \n");
    scanf(" %c", &est1);

    printf("Codigo: \n");
    scanf("%s", cod1);

    printf("Nome da Cidade: \n");
    scanf("%s", cid1);

    printf("Populacao: \n");
    scanf("%d", &pop1);

    printf("Area: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &npt1);
    
    printf("Carta: %d\n Estado: %c\n Codigo: %s\n Nome da Cidade: %s\n Populacao: %d\n Area: %f\n PIB: %f\n Numero de Pontos Turisticos: %d\n", card1, est1, cod1, cid1, pop1, area1, pib1, npt1);
    

    printf("Numero da carta: \n");
    scanf("%d", &card2);

    printf("Estado: \n");
    scanf(" %c", &est2);

    printf("Codigo: \n");
    scanf("%s", cod2);

    printf("Nome da Cidade: \n");
    scanf("%s", cid2);

    printf("Populacao: \n");
    scanf("%d", &pop2);

    printf("Area: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &npt2);

    printf("Carta: %d\n Estado: %c\n Codigo: %s\n Nome da Cidade: %s\n Populacao: %d\n Area: %f\n PIB: %f\n Numero de Pontos Turisticos: %d\n", card2, est2, cod2, cid2, pop2, area2, pib2, npt2);

    return 0;
}