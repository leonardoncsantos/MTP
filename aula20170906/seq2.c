#include <stdio.h>

int main ()
  {
    int numero;
    printf("entre com um numero: ");
    scanf("%d", &numero);
    if(numero%2)//impar, pois o 0 nos beats � falso
    {
        printf("numero impar.\n");
        if(numero%5==0)
            printf("numero multiplo de 5.\n");
    }
    else
    {
        printf("numero par.\n");
        if(numero%3==0)
        printf("numero multiplo de 3.\n");
        if(numero%7==0)
        printf("numero multiplo de 7.\n");

    }
    return 0;
  }
