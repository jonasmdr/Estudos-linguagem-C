#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --aa
    Pós-Decremento a--
    */

    /*
    
    Resumo Rápido: Atalhos de Soma em C
1. O ++ e o -- (Passo de formiga)

Regra: Sobem ou descem APENAS de 1 em 1.
Como fica: x++;
O que significa: x = x + 1;
Quando usar: Para contar coisas (1, 2, 3, 4...).

2. O += e o -= (Pulos maiores)
Regra: Sobem ou descem qualquer outro valor.
Como fica: x += 5;
O que significa: x = x + 5;
Quando usar: Para acumular valores (somar pontos, moedas, salários).
(A mesma regra vale para multiplicar *= e dividir /=)

    */

    int numero1 = 1;

    printf("Antes incremento: %d\n", numero1);
    numero1++;
    printf("Apos incremento: %d\n", numero1);
    numero1--;
    printf("Antes decremento: %d\n", numero1);
        





}