#include <stdio.h>

#define MAX 100

void multiplicarEImprimirMatrizes(int linhas1, int colunas1, int matriz1[][MAX], 
                                  int linhas2, int colunas2, int matriz2[][MAX]) {
    if (colunas1 != linhas2) {
        printf("as matrizes não podem ser multiplicadas. Dimensões incompativeis.\n");
        return;
    }

    int resultado[MAX][MAX] = {0};

    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            for (int k = 0; k < colunas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    printf("matriz resultante da multiplicação:\n");
    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int matriz2[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    multiplicarEImprimirMatrizes(2, 3, matriz1, 3, 2, matriz2);

    return 0;
}
