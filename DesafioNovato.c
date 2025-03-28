#include <stdio.h>

int main() {
    int peca = 0, direcao;

    printf("DIGITE O NÚMERO DA PEÇA QUE IRÁ MOVIMENTAR\n");
    printf("1 - Torre;\n");
    printf("2 - Bispo;\n");
    printf("3 - Rainha;\n");
    scanf("%d", &peca);

    switch (peca) {
        case 1: // Torre (usando for)
            printf("Move-se em linha reta horizontalmente ou verticalmente. Escolha a direção do movimento:\n");
            printf("1 - Cima;\n");
            printf("2 - Baixo;\n");
            printf("3 - Direita;\n");
            printf("4 - Esquerda;\n");
            scanf("%d", &direcao);

            switch (direcao) {
                case 1:
                    for (int casaTorre = 1; casaTorre <= 5; casaTorre++) {
                        printf("Cima\n");
                    }
                    break;
                case 2:
                    for (int casaTorre = 1; casaTorre <= 5; casaTorre++) {
                        printf("Baixo\n");
                    }
                    break;
                case 3:
                    for (int casaTorre = 1; casaTorre <= 5; casaTorre++) {
                        printf("Direita\n");
                    }
                    break;
                case 4:
                    for (int casaTorre = 1; casaTorre <= 5; casaTorre++) {
                        printf("Esquerda\n");
                    }
                    break;
                default:
                    printf("Opção Inválida\n");
                    break;
            }
            break;

        case 2: // Bispo (usando while)
            printf("Move-se na diagonal. Escolha a direção do movimento:\n");
            printf("1 - Diagonal Superior Direita;\n");
            printf("2 - Diagonal Superior Esquerda;\n");
            printf("3 - Diagonal Inferior Direita;\n");
            printf("4 - Diagonal Inferior Esquerda;\n");
            scanf("%d", &direcao);

            int casaBispo = 1; // Variável de controle para o while
            switch (direcao) {
                case 1:
                    while (casaBispo <= 5) {
                        printf("Cima, Direita\n");
                        casaBispo++;
                    }
                    break;
                case 2:
                    while (casaBispo <= 5) {
                        printf("Cima, Esquerda\n");
                        casaBispo++;
                    }
                    break;
                case 3:
                    while (casaBispo <= 5) {
                        printf("Baixo, Direita\n");
                        casaBispo++;
                    }
                    break;
                case 4:
                    while (casaBispo <= 5) {
                        printf("Baixo, Esquerda\n");
                        casaBispo++;
                    }
                    break;
                default:
                    printf("Opção Inválida\n");
                    break;
            }
            break;

        case 3: // Rainha (usando do-while)
            printf("Move-se em todas as direções. Escolha a direção do movimento:\n");
            printf("1 - Esquerda;\n");
            printf("2 - Direita;\n");
            printf("3 - Cima;\n");
            printf("4 - Baixo;\n");
            scanf("%d", &direcao);

            int casaRainha = 1; // Variável de controle para o do-while
            switch (direcao) {
                case 1:
                    do {
                        printf("Esquerda\n");
                    } while (casaRainha <= 8);
                    break;
                case 2:
                    do {
                        printf("Direita\n");
                        casaRainha++;
                    } while (casaRainha <= 8);
                    break;
                case 3:
                    do {
                        printf("Cima\n");
                        casaRainha++;
                    } while (casaRainha <= 8);
                    break;
                case 4:
                    do {
                        printf("Baixo\n");
                        casaRainha++;
                    } while (casaRainha <= 8);
                    break;
                default:
                    printf("Opção Inválida\n");
                    break;
            }
            break;

        default:
            printf("Opção Inválida\n");
            break;
    }

    return 0;
}
