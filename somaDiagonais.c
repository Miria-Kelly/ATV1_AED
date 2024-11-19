#include <stdio.h>
#include <stdlib.h>

int somaDiagonais(int linhas, int colunas, int array[linhas][colunas]);

int main()
{
    int array[3][3] = {{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9}
                        };
    printf("%d\n", somaDiagonais(3, 3, array));
}

int somaDiagonais(int linhas, int colunas, int array[linhas][colunas])
{
    int somaPrimaria = 0, somaSecundaria = 0;
    if (linhas != colunas)
    {
        printf("nao eh possivel fazer a soma das diagonais");
    }
    else
    {
        for (int i = 0; i < linhas; i++)
        {
            somaPrimaria += array[i][i];
            somaSecundaria += array[i][linhas - 1 - i];
            
            }
        
    }
    return somaPrimaria + somaSecundaria;
}


