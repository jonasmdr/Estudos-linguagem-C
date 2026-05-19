#include <stdio.h>
int main(){
    int idade;
    //Os inteiros são números sem casas decimais. Eles são usados quando você precisa contar ou trabalhar com números inteiros. Por exemplo, int idade = 25; armazena a idade de uma pessoa.
    int quantidade;
    float altura;
    double peso;
    //Os números de ponto flutuante são usados para representar números com casas decimais. Existem dois tipos principais: float e double . A diferença entre eles é a precisão. float ocupa menos espaço na memória, mas tem menos precisão do que double.
//float altura = 1.75;
//double salario = 3000.50;
    char letra;
    //O tipo char armazena caracteres como números inteiros que representam sua posição na tabela ASCII (American Standard Code for Information Interchange). A tabela ASCII mapeia caracteres (letras, números, símbolos) para números de 0 a 127. Por exemplo, o caractere 'A' é representado pelo número 65.
    char nome [20];
    int _teste;
    int teste_2;
    //para declarar uma variavel ela nao pode começar com número. pra usa-la tem que colocar do mesmo jeito que foi declarada, letras maiusculas e minusculas
    //a variavel tem que ser declarada em algum momento, pode ser antes ou na execuçao
    printf("Por favor, digite a idade: ");
    scanf("%d", &idade);
    printf("Por favor, digite o nome: ");
    scanf("%s", &nome);
    scanf(" %c", &letra);
    printf("Que legal! seu nome: %s. \n voce tem %d anos!\n A letra foi: %c. \n", nome, idade, letra);
}

/*A seguir, você tem uma lista dos principais especificadores utilizados:

%d: Imprime um inteiro no formato decimal.
 
%i: Equivalente a %d.
 
%f: Imprime um número de ponto flutuante no formato padrão.
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia (string) de caracteres. */


/*
Lendo Strings com Espaços: fgets

Para ler strings com espaços em branco, a função fgets é a melhor opção. Ela lê uma linha inteira da entrada, incluindo espaços, até encontrar um caractere de nova linha (\n) ou atingir o tamanho máximo especificado.

char nome[50];
 
printf("Digite seu nome completo: ");
 
fgets(nome, 50, stdin); // Lê no máximo 49 caracteres da entrada padrão (stdin)
 
// fgets inclui o '\n' na string, então podemos removê-lo se necessário
 
nome[strcspn(nome, "\n")] = 0;
 
printf("Nome completo digitado: %s\n", nome);
 
fgets recebe três argumentos:
O array onde a string será armazenada.
O tamanho máximo da string (incluindo o \n e o \0).
O fluxo de entrada (geralmente stdin para a entrada padrão do teclado).
 
A linha nome[strcspn(nome, "\n")] = 0; remove o caractere de nova linha (\n) que fgets pode incluir na string. strcspn retorna o índice da primeira ocorrência de \n na string nome.
*/