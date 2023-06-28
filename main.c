#include <stdio.h>
int main()
{
    int tamLinha, tamColuna;
    scanf("%d %d", &tamLinha, &tamColuna);
    char matriz[tamLinha][tamColuna];

    for (int i = 0; i < tamLinha; i++) {
        for (int j = 0; j < tamColuna; j++) {
            scanf(" %c", &matriz[i][j]);
        }
    }
    for (int linhaEscaneada = 0; linhaEscaneada < tamLinha; linhaEscaneada++) {
        for (int colunaEscaneada = tamColuna - 1; colunaEscaneada >= 0; colunaEscaneada--) {
            // gravidade �gua para esquerda
            if (matriz[linhaEscaneada][colunaEscaneada] == 'o') {
                if (linhaEscaneada != tamLinha - 1 && colunaEscaneada != 0) {
                    if (matriz[linhaEscaneada + 1][colunaEscaneada] != '#') {
                        matriz[linhaEscaneada + 1][colunaEscaneada] = 'o';
                    } else {
                        matriz[linhaEscaneada][colunaEscaneada - 1] = 'o';
                    }
                }
            }
        }
    }
    for (int linhaEscaneada = 0; linhaEscaneada < tamLinha; linhaEscaneada++) {
        for (int colunaEscaneada = 0; colunaEscaneada < tamColuna; colunaEscaneada++) {
            // gravidade �gua para direta
            if (matriz[linhaEscaneada][colunaEscaneada] == 'o') {
                if (linhaEscaneada != tamLinha - 1 && colunaEscaneada != tamColuna) {
                    if (matriz[linhaEscaneada + 1][colunaEscaneada] != '#') {
                        matriz[linhaEscaneada + 1][colunaEscaneada] = 'o';
                    } else {
                        matriz[linhaEscaneada][colunaEscaneada + 1] = 'o';
                    }
                }
            }
        }
    }
    printf("\n");
    for (int i = 0; i < tamLinha; i++) {
        for (int j = 0; j < tamColuna; j++) {
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
