#include <stdio.h>

int somaArray(int linha, int coluna, int array[linha][coluna]);

int main(){
    int array[3][2]= {  {1,2},
                        {3,4},
                        {5,6}};
    printf("a soma dos elemntos eh %d\n", somaArray(3,2,array));

}

int somaArray(int linha, int coluna, int array[linha][coluna]){
    int soma = 0;
    for(int i =0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            soma += array[i][j];
        }
    }
    
    return soma;
}