#include <stdio.h>
//É usado para declarar variáveis que podem armazenar apenas valores positivos (incluindo zero). Ele pode ser aplicado aos tipos de dados int e char, dobrando a faixa positiva de valores que podem ser armazenados. Observe!

/* int

int pode armazenar valores que vão de -2,147,483,648 a 2,147,483,647, permitindo tanto números positivos quanto negativos. Já um unsigned int pode armazenar apenas valores positivos, dobrando a faixa positiva para 0 a 4,294,967,295.

char

char pode armazenar valores que vão de -128 a 127. Já um unsigned char pode armazenar apenas valores positivos, permitindo um intervalo de 0 a 255. Isso é útil para armazenar caracteres de conjuntos de caracteres estendidos ou para representar dados binários. */


/*
Exemplo de unsigned int e int

Nesse exemplo, a variável signedNumber é declarada como int, e a variável unsignedNumber é declarada como unsigned int, ambas armazenando o valor 3000000000.

O especificador de formato %d é usado no printf para exibir valores int, enquanto %u é usado para exibir valores unsigned int.

Vamos executar esse programa e verificar como ficam as saídas.
*/
int main(){
    int numeroSinal = 3000000000; //Este valor excede o limite de um int normal
    unsigned int numeroSemSinal = 3000000000;

    printf("numero com sinal %d\n", numeroSinal);
    printf("numero sem sinal: %u\n", numeroSemSinal);

    return 0;

    /*
    A saída mostra que o valor 3000000000 é armazenado corretamente na variável unsigned int, mas excede o limite da variável int, resultando em um valor negativo devido ao overflow (situação em que um valor excede a capacidade de armazenamento de determinado tipo de dado). Isso ilustra a importância de escolher o tipo de dado correto para evitar problemas de armazenamento.
    */

/* a seguir apresenta um resumo sobre os tipos de dados int e char.
Tipo	         Intervalo de valores
int	             -2,147,483,648 a 2,147,483,647
unsigned int	 0 a 4,294,967,295
char	         -128 a 127
unsigned char	 0 a 255


Quando usar unsigned? Imagine que você está desenvolvendo um jogo e precisa armazenar a pontuação do jogador. A pontuação nunca será negativa, então usar unsigned int permite armazenar pontuações maiores do que seria possível com um int comum. Outro exemplo seria ao trabalhar com pixels de uma imagem, que são representados por valores de 0 a 255; nesse caso, unsigned char é ideal.
*/



}