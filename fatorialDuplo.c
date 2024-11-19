#include <stdio.h>
#include <stdlib.h>

int fatorialDuplo(int numero);

int main()
{
    printf("%d", fatorialDuplo(2));
}
int fatorialDuplo(int numero)
{
    if (numero % 2 == 0 && numero == 2){
        return 2;
    }
    else if (numero % 2 != 0 && numero == 1){
        return 1;
    }else
    {
        return numero * fatorialDuplo(numero - 2);
    }
 
}