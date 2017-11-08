
#include <stdio.h>
#include <stdlib.h>
#include "mat.h"

int main ()
{
    Matriz A, adjA;
    int ordem;
    printf("entre com a ordem da matriz: ");
    scanf("%d", &ordem);
    A=criarMatriz (ordem,ordem);
    preencherMatriz(A);
    printf("original: %d\n", ordem);
    imprimirMatriz(A);
    adjA= adjunta(A);
    printf("adjunta: \n");
    imprimirMatriz(adjA);
    destuirMatriz(A);
    destruirMatriz(adjA);


