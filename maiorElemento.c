#include <stdio.h>

int maiorElemento(int array[], int tamanho);

int main(){
    int array[]= {1,6,3,5,3};
    printf("%d",maiorElemento(array, 5));
}

int maiorElemento(int array[], int tamanho){
    int maior = array[0];
    for(int i = 0; i < tamanho; i++){
        if(array[i] > maior){
            maior = array[i];
        }
    }
    printf("o maior elemento eh %d\n", maior);
    return 0;
}
