#include <stdio.h>

//início das mudanças 
int main() {

    int i = 0;
    //utilização da estrutura "for" para descrever o movimento do bispo
    printf("=======================\n");
    printf("Bispo\n");
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Cima, direita\n");
    }

    //utilização da estrutura "do while" para descrever o movimento da torre
    printf("=======================\n");
    printf("Torre\n");
    printf("\n");
    do
    {
        printf("Direita\n");
        i++;
    } while (i < 5);
    
    //utilização da estrutura "while" para descrever o movimento da rainha
    printf("=======================\n");
    printf("Rainha\n");
    printf("\n");
    i = 0;
    while (i < 8)
    {
        i++;
        printf("Esquerda\n");
    }
    
    printf("=======================\n");
    
    /* As seguintes pontuações são aquelas já inclusas no projeto, preservadas para ajuda futura.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    */
    return 0;
}
