//A modularidade está diretamente ligada ao conceito de dividir um problema grande e complexo em problemas menores e mais manejáveis. Ela envolve escrever funções ou módulos que realizam tarefas específicas, tornando o código mais reutilizável e fácil de entender. Cada módulo deve ter uma única responsabilidade. Embora o conceito de função não seja o foco deste desafio, utilizaremos funções genéricas para ilustrar a modularidade. Vamos usar o exemplo de cálculo da média de temperaturas para ilustrar a modularidade.

#include <stdio.h>
 
// Função genérica para entrada de dados
void entradaDados() {
    // código para a função entradaDados
}
 
// Função genérica para cálculo da média
float calcularMedia() {
    // código para a função calcularMedia
}
 
// Função genérica para exibir dados
void exibirMedia() {
    // código para a função exibirMedia
}
 
int main() {
 
    entradaDados();
    //media = calcularMedia();
    exibirMedia();
 
    return 0;
}

/* Abstração

Permite focar os aspectos mais importantes de um problema, ignorando os detalhes irrelevantes. Isso é importante para lidar com a complexidade.
Usando o exemplo do cálculo da média das temperaturas, em vez de se preocupar com os detalhes de como a entrada de dados é feita, você pode criar uma função entradaDados que abstrai esse processo. Assim, se precisar modificar a maneira como os dados são coletados, basta alterar essa função, mantendo o restante do código inalterado. */