#include <stdio.h>

int main(){

int numero, resultado;

numero = 2;
resultado = ++numero;
printf("Pre-incremento: %d\n valor do numero: %d\n", resultado, numero);

resultado = numero++;
printf("Pos-incremento: %d\n Valor do numero: %d", resultado, numero);

/*

Exemplo: A Playlist de Músicas
Imagine que a variável faixa está marcando a Música 3 da sua playlist. Veja a diferença na hora de dar o "Play":

Pós-incremento (Símbolo DEPOIS): tocar(faixa++);

O que acontece: É o fluxo normal. O aplicativo toca a Música 3 inteira. Só depois que ela termina (ou seja, depois de "usar" o valor), ele muda o marcador para a música 4.

Resumo: Toca a atual, depois avança.

Pré-incremento (Símbolo ANTES): tocar(++faixa);

O que acontece: É igual apertar o botão de "Pular" (Next). O aplicativo soma 1 primeiro, pulando para a faixa 4, e já começa tocando a Música 4.

Resumo: Avança primeiro, toca a nova.

*/


/*

Na vida real de um programador, a diferença entre usar o ++ antes ou depois brilha em duas situações clássicas: guardar itens em listas e gerar IDs (identidades).

Aqui está como usamos no dia a dia:

📌 1. Pós-incremento (x++): O Inventário do Jogo
É muito usado quando você vai guardar itens em um vetor (lista) e precisa preparar o espaço para o próximo item logo em seguida.

Imagine que o jogador achou uma espada e vai guardar na mochila. O espaço vazio atual é o 0.

C
// Em uma única linha de código, você faz duas coisas:
// 1º: Guarda a espada no espaço atual (0).
// 2º: Aumenta o contador para 1 (preparando o espaço para o próximo item).

mochila[espaco_livre++] = "Espada"; 
Se usássemos o ++ antes, ele ia somar para 1 primeiro, pularia o espaço 0 e guardaria a espada no lugar errado!

📌 2. Pré-incremento (++x): O Gerador de ID
É usado quando você tem um número base que não pode ser repetido e você precisa criar o próximo número antes de entregar para o usuário.

Imagine que você está programando o cadastro de um site. O último usuário criado foi o ID 100. Entrou um usuário novo:

C
// 1º: Soma 1 ao último ID (vira 101).
// 2º: Entrega o novo ID (101) para o usuário que acabou de se cadastrar.

novo_usuario.id = ++ultimo_id;
Se usássemos o ++ depois, o novo usuário receberia o ID 100 (que já tem dono!), causando um erro no banco de dados, e só depois o sistema ia mudar para 101.

*/


}