#include <stdio.h>
 /*
 Modificador long

É usado para aumentar a capacidade de armazenamento dos tipos de dados primitivos. Ele pode ser aplicado a int e double, permitindo armazenar valores maiores e com maior precisão.

Um int normal pode armazenar valores que vão de -2,147,483,648 a 2,147,483,647. Já um long int pode armazenar valores muito maiores, de -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807, proporcionando uma faixa muito mais ampla para cálculos que exigem grandes números inteiros.

Um double pode armazenar valores com grande precisão, de ±1.7E-308 a ±1.7E+308. Um long double, por outro lado, oferece uma precisão ainda maior, permitindo armazenar valores de ±3.4E-4932 a ±1.1E+4932. Veja a tabela!
 */

    /*
    Tipo	|      Intervalo de valores
int	        |-2,147,483,648 a 2,147,483,647
long int	|-9,223,372,036,854,775,808 a 9,223,372,036,854,775,807
double	    |±1.7E-308 a ±1.7E+308
long double	|±3.4E-4932 a ±1.1E+4932
    */
    /*
    Quando usar long? Se você precisa trabalhar com números que excedem a capacidade de um int normal (por exemplo, em cálculos astronômicos ou para armazenar a população mundial), long int ou long long int são necessários. Se a precisão de double não for suficiente para seus cálculos (em simulações físicas ou modelagem financeira, por exemplo), long double é a escolha adequada.
    */

    /*
    Exemplo de long int e int

Nesse exemplo, a variável regularNumber é declarada como int, enquanto bigNumber é declarada como long int. Ambos armazenam inicialmente o valor máximo de um int (2147483647). Em seguida, bigNumber é atualizado para 2147483648, que está fora do alcance de um int normal, mas dentro do alcance de um long int. Confira!
    */
int main() {
    int regularNumber = 2147483647; // Valor máximo de int
    long int bigNumber = 2147483647;
 
    printf("Numero regular (int): %d\n", regularNumber);
    printf("Numero grande (long int): %ld\n", bigNumber);
 
    bigNumber = 2147483648; // Valor maior que o máximo de int
    printf("Numero grande atualizado (long int): %ld\n", bigNumber);
 
    return 0;

    /*
    A saída mostra que tanto regularNumber quanto bigNumber podem armazenar o valor 2147483647. No entanto, quando bigNumber é atualizado para 2147483648, ele pode armazenar o valor corretamente, enquanto regularNumber não poderia armazenar esse valor por exceder o limite de um int.
    */
}