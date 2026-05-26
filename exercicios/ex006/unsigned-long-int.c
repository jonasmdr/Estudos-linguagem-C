/*
Veja a seguir um exemplo de uso combinado:

A variável largePositiveNumber é declarada como unsigned long int, permitindo armazenar um número positivo extremamente grande. O especificador de formato %lu é usado no printf para exibir valores unsigned long int.
*/

#include <stdio.h>
 
int main() {
    unsigned long int largePositiveNumber = 4000000000;
    printf("Número positivo grande: %lu\n", largePositiveNumber);
 
    return 0;
}

/*

A saída mostra que a variável largePositiveNumber, declarada como unsigned long int, armazena corretamente um valor extremamente grande (4000000000). Utilizando o modificador unsigned long, a faixa de valores possíveis para armazenamento é ampliada, evitando problemas de overflow e garantindo que valores positivos muito grandes sejam armazenados e manipulados corretamente.
*/

/*
Prática recomendada

Para garantir que suas operações com tipos de dados modificados sejam realizadas corretamente e para evitar problemas de overflow ou perda de precisão, aqui estão algumas práticas recomendadas que você deve seguir. Acompanhe!
-------------------------------------------------------------------
Escolha o tipo de dado apropriado

Utilize modificadores de tipo quando precisar armazenar valores fora do alcance dos tipos de dados primitivos padrão.


Verifique a compatibilidade de tipos

Sempre verifique a compatibilidade dos tipos de dados ao realizar operações aritméticas para evitar resultados inesperados.


Use especificadores de formato corretos

Utilize os especificadores de formato corretos ao exibir valores com printf para garantir que os dados sejam exibidos corretamente.
*/