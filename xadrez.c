# include <stdio.h>

void torre (int sentido){
    if (sentido > 0) {
        printf("Voce movimentou a peca %d contagem para direita.\n", sentido);
        torre (sentido - 1);
    }
    printf("\n");
}

void rainha (int sentido){
    if (sentido > 0) {
        printf("Voce movimentou a peca %d contagem para esquerda.\n", sentido);
        rainha( sentido - 1);
    }
    printf("\n");
}

void bispo (int sentido) {
    for (sentido = 1; sentido >= 1 && sentido <= 5; sentido++) {
        printf("Voce movimentou a peca %d contagem para cima e para esquerda.\n",sentido);
    }
    printf("\n");
}

void cavalo (int sentido, int l){
    for (sentido = 1, l = 1; sentido <= 2 && l <=1; sentido++, l--) {
        printf("Voce movimentou a peca %d contagem para direita e %d contagem para cima.\n", sentido, l);
    }
    printf("\n");
}

int main() {
    // DEFININDO VARIAVEIS DO JOGO DE XADREZ

    int opcao, sentido, l;
    char nome [20];



    printf("Ola, Seja bem vindo ao jogo de simulacao de xadrez... entre com seu nome: \n");
    scanf("%s", &nome);

    // DEFININDO A BLOCO DE CÓDIGO

    do {
        // DEFININDO O MENU DO JOGO DE XADREX
        printf("#### JOGO DE XADREZ ####\n");
        printf("================================================================\n");
        printf("Ola, %s vamos iniciar o jogo ! selecione uma das opcoes abaixo.\n", nome);
        printf("1. Movimentar a TORRE ?.\n");
        printf("2. Movimentar a RAINHA ?.\n");
        printf("3. Movimentar o BISPO ?.\n");
        printf("4. Movimentar o Cavalo ?\n");
        printf("5. Sair do Jogo ?.\n");
        printf("================================================================\n");

        // DEFININDO A INTERAÇÃO COM O USUÁRIO
        printf("Selecione uma das opcoes abaixo: \n");
        scanf("%d", &opcao);

        // DEFININDO O BLOCO DE CONDIÇÕES
        switch (opcao) {
            case 1:
                printf("### Opcao selecionada: movimentar a TORRE ###\n");
                printf("Informe quantas vezes deseja movimentar: \n");
                scanf("%d", &sentido);

                // LOGICA DA MOVIMENTAÇÃO DA PEÇA TORRE
                torre(sentido);
                printf("PARABENS ! Peca movimentada com sucesso !\n");
                printf("=========================================\n");
                break;
            case 2:
                printf("### Opcao selecionada: movimentar a RAINHA ###\n");
                printf("Informe quantas vezes deseja movimentar: \n");
                scanf("%d", &sentido);


                // LOGICA DA MOVIMENTAÇÃO DA PEÇA RAINHA

                rainha(sentido);
                printf("PARABENS ! Peca movimentada com sucesso !\n");
                printf("==========================================\n");
                break;
            case 3:
                printf("### Opcao selecionada: movimentar o BISPO ###\n");
                printf("Informe quantas vezes deseja movimentar: \n");
                scanf("%d", &sentido);

                // LOGICA DA MOVIMENTAÇÃO DA PEÇA BISPO

                bispo(5);
                printf("PARABENS ! Peca movimentada com sucesso !\n");
                printf("==========================================\n");
                break;
            case 4:
                printf("### Opcao selecionada: movimentar o CAVALO ###\n");
                printf("Informe quantas vezes deseja movimentar: \n");
                scanf("%d", &sentido);


                // LOGICA DA MOVIMENTAÇÃO DA PEÇA CAVALO

                cavalo(sentido,l);
                printf("PARABENS ! Peca movimentada com sucesso !\n");
                printf("==========================================\n");
                break;
            case 5:
                printf("### Opcao selecionada: Sair do Jogo ###\n");
                printf("Voce saiu do Jogo de XADREZ !.\n");
                break;
                default:
                printf("SELECIONE A OPCAO VALIDA!.\n");
                break;

        }
    }while (opcao != 5);

    return 0;
}
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