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
            // gravidade agua para esquerda
            if (matriz[linhaEscaneada][colunaEscaneada] == 'o') {
            
                    if (matriz[linhaEscaneada + 1][colunaEscaneada] != '#' && linhaEscaneada != tamLinha - 1 && colunaEscaneada != 0) {
                        matriz[linhaEscaneada + 1][colunaEscaneada] = 'o';
                    } else if(matriz[linhaEscaneada][colunaEscaneada - 1] != '#' && linhaEscaneada != tamLinha - 1 && colunaEscaneada != 0) {
                        matriz[linhaEscaneada][colunaEscaneada - 1] = 'o';
                    
                }
            }
        }
    }
    for (int linhaEscaneada = 0; linhaEscaneada < tamLinha; linhaEscaneada++) {
        for (int colunaEscaneada = 0; colunaEscaneada < tamColuna; colunaEscaneada++) {
            // gravidade agua para direta
            if (matriz[linhaEscaneada][colunaEscaneada] == 'o') {
              
                    if (matriz[linhaEscaneada + 1][colunaEscaneada] != '#' && linhaEscaneada != tamLinha - 1 && colunaEscaneada != tamColuna) {
                        matriz[linhaEscaneada + 1][colunaEscaneada] = 'o';
                    } else if(matriz[linhaEscaneada][colunaEscaneada + 1] != '#' && linhaEscaneada != tamLinha - 1 && colunaEscaneada != tamColuna){
                        matriz[linhaEscaneada][colunaEscaneada + 1] = 'o';
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
