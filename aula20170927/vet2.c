#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main ()
{
    int i, x, j; int vet[10];
    for(x=0; x<10; x++){
        printf("digite o valor do vetor na posiçao (%d): \n", x);
        scanf("%d", &vet[x]);
    }




    for(i=0, j=10; i<5, j>5; i++, j--)
    {

        vet[i]=vet[j];
    }
    printf("o vetor reverso eh: \n");
        for(i=0; i<10; i++)
        printf("%d\n", vet[i]);


}
