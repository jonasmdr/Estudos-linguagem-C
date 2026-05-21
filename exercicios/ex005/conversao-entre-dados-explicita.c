#include <stdio.h>

int main(){
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; //'a' é explicitamente convertido para float

    printf("Quociente: %.2f\n", quociente);

    return 0;

/*

A armadilha: Na linguagem C, se você divide um int por outro int, o resultado obrigatoriamente será um int. Se você fizesse apenas a / b, o computador dividiria 10 por 3, o resultado daria 3.3333, mas ele jogaria fora os decimais e guardaria apenas o número 3.

O Casting (float): Para não perder os decimais, você coloca esse (float) antes da variável a. Isso diz ao programa: "Ei, por um segundo, trate o valor de a como se ele fosse um número quebrado (10.0) só para fazer essa conta".

A consequência: Como agora a conta tem um número com decimal (10.0 / 3), o computador entende que o resultado também precisa ter decimais (3.3333...) e guarda isso perfeitamente na variável quociente, que foi criada com o tipo certo (float).

*/




/*
Verifique os tipos

Sempre verifique os tipos de dados ao realizar operações aritméticas para evitar resultados inesperados.


Use casting quando necessário

Utilize casting explícito para garantir que as operações sejam realizadas no tipo de dado correto.


Cuidado com a precisão

Lembre-se de que variáveis de ponto flutuante podem introduzir erros de precisão. Use double para maior precisão quando necessário.
*/

}