#include <stdio.h>

void simetrica(int linhas, int colunas, int array[linhas][colunas]);

int main() {
    int array[3][3] = { {1, 2, 3},
                        {2, 4, 5},
                        {3, 5, 6}};

    simetrica(3, 3, array);
    return 0;
}

void simetrica(int linhas, int colunas, int array[linhas][colunas]) {
    if (linhas != colunas) {
        printf("nao eh possivel verificar a simetria, pois a matriz nao eh quadrada.\n");
        return;
    }

    int ok = 1;
    for (int i = 0; i < linhas; i++) {
        for (int j = i + 1; j < colunas; j++) {
            if (array[i][j] != array[j][i]) {
                ok = 0; 
                break;
            }
        }
        if (!ok) { 
            break;
        }
    }

    if (ok) {
        printf("a matriz eh simetrica\n");
    } else {
        printf("a matriz nao eh simetrica\n");
    }
}
