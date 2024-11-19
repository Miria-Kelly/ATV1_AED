#include <stdio.h>

int potencia(int base, int expoente);


int main(){
  
    printf("%d\n",potencia(2,3));
}

int potencia(int base, int expoente){
    if (expoente == 0){
        return 1;
    }
    else{
        return base * potencia(base, expoente-1);
    }
}