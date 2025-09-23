# include <stdio.h>

int main() {
    // DEFININDO VARIAVEIS DO JOGO DE XADREZ

    int opcao, sentido;
    char nome [20], sentido_peca[20], diagonal[20];



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
        printf("4. Sair do Jogo ?.\n");
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
                printf("Informe o sentido do movimento [Direita-Esquerda-Cima-Baixo]: \n ");
                scanf("%s", &sentido_peca);

                for (sentido = 1; sentido >=1 && sentido <= 5; sentido++) {
                    printf("Voce movimentou a peca %d contagem e para %s.\n",sentido, sentido_peca);
                }
                printf("PARABENS ! Peca movimentada com sucesso !\n");
                printf("=========================================\n");
                break;
            case 2:
                printf("### Opcao selecionada: movimentar a RAINHA ###\n");
                printf("Informe quantas vezes deseja movimentar: \n");
                scanf("%d", &sentido);
                printf("Informe o sentido do movimento [Direita-Esquerda-Cima-Baixo]: \n ");
                scanf("%s", &sentido_peca);

                for (sentido = 1; sentido >= 1 && sentido <= 8; sentido++) {
                    printf("Voce movimentou a peca %d contagem e para %s.\n",sentido, sentido_peca);
                }
                printf("PARABENS ! Peca movimentada com sucesso !\n");
                printf("==========================================\n");
                break;
            case 3:
                printf("### Opcao selecionada: movimentar o BISPO ###\n");
                printf("Informe quantas vezes deseja movimentar: \n");
                scanf("%d", &sentido);
                printf("Informe o sentido da diagonal [Cima-Baixo]: \n ");
                scanf("%s", &diagonal);
                printf("Informe o sentido do movimento [Direita-Esquerda]: \n ");
                scanf("%s", &sentido_peca);

                for (sentido = 1; sentido >= 1 && sentido <= 5; sentido++) {
                    printf("Voce movimentou a peca %d contagem, %s para %s.\n",sentido, diagonal, sentido_peca);
                }
                printf("PARABENS ! Peca movimentada com sucesso !\n");
                printf("==========================================\n");
                break;
            case 4:
                printf("### Opcao selecionada: Sair do Jogo ###\n");
                printf("Voce saiu do Jogo de XADREZ !.\n");
                break;
                default:
                printf("SELECIONE A OPCAO VALIDA!.\n");
                break;

        }
    }while (opcao != 4);

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