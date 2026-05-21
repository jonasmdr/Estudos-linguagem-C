#include <stdio.h>

int main(){
    int num1, num2;
    int soma, sub, mult, div;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: \n");
    scanf("%d", &num2);

    //operaçao soma
    soma = num1 + num2;
    //operaçao subtraçao
    sub = num1 - num2;
    //operaçao multiplicaçao
    mult = num1 * num2;
    //operaçao divisao
    div = num1 / num2;

    printf("O resultado da soma: %d\n subtracao: %d\n multiplicacao: %d\n divisao: %d\n", soma,sub, mult, div);

    return 0;
}