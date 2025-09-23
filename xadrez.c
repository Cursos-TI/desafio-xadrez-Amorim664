#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {


    // Variaveis

    int torre, bispo, rainha, opcao;
    char sentido[20], diagonal[20];

    // Menu interativo

    do {
        printf("#### DESAFIO JOGO XADREZ ####\n ");
        printf("=============================\n");
        printf("1. para movimentar a TORRE.\n");
        printf("2. para movimentar a RAINHA.\n");
        printf("3. para movimentar o BISPO.\n");
        printf("4. Sair do programa.\n");
        printf("==============================\n");
        printf("Informe a opcao desejada: \n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("### OPCAO SELECIONADA: MOVIMENTAR TORRE ###\n");
                printf("============================================\n");
                printf("Informe quantas casas voce deseja movimentar a TORRE : \n");
                scanf("%d", &torre);
                printf("Informe o sentido da movimentacao: \n");
                scanf("%s", &sentido);

                // Logica da peça Torre
                for (torre = 1; torre <= 5; torre++) {
                    printf("Voce movimentou a torre %d a %s.\n",torre, sentido);
                }
                printf("Peca movimentada com sucesso !\n");
                printf("=====================================\n");
                break;
            case 2:
                printf("### OPCAO SELECIONADA: MOVIMENTAR RAINHA ###\n");
                printf("============================================\n");
                printf("Informe quantas casas voce deseja movimentar a RAINHA : \n");
                scanf("%d", &rainha);
                printf("Informe o sentido da movimentacao: \n");
                scanf("%s", &sentido);

                for (rainha = 1; rainha <= 8; rainha++) {
                    printf("Voce movimentou a rainha %d a %s.\n", rainha, sentido);
                }
                printf("Peca movimentada com sucesso !\n");
                printf("=====================================\n");
                break;
            case 3:
                printf("### OPCAO SELECIONADA: MOVIMENTAR BISPO ###\n");
                printf("===========================================\n");
                printf("Informe quantas casas voce deseja movimentar o BISPO : \n");
                scanf("%d", &bispo);
                printf("Informe o sentido da movimentacao diagonal: \n");
                scanf("%s", &diagonal);
                printf("Informe o sentido da movimentacao: \n");
                scanf("%s", &sentido);

                for (bispo = 1; bispo <= 5 ; bispo ++) {
                    printf("Voce movimentou o bispo %d para %s, %s.\n", bispo, diagonal, sentido);
                }
                printf("Peca movimentada com sucesso !\n");
                printf("===========================================\n");
                break;
            case 4:
                printf("### OPCAO SELECIONADA: SAIR DO JOGO ###\n");
                printf("=======================================\n");
                printf("Voce saiu do jogo!\n");
                break;
            default:
                printf("Selecione a opcao valida!\n");
                break;
        }
    }while (opcao != 4);



    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

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

    return 0;
}
