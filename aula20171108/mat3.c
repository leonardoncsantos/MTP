#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"
int main()
{
Matriz A,I,adjA;
double a;
int ordem;
printf("write array order:  ");
scanf("%d", &ordem);
A=criarMatriz(ordem,ordem);
preencherMatriz(A);
printf("Original: \n");
imprimirMatriz(A);
adjA=adjunta(A);
a= determinante(A);
if(a==0)
printf("The matrix A has no inverse ! \n\n");
if(a!=0)
    {
    printf("The inverse is:\n\n");
    I=Inversa(A,adjA,a);
    imprimirMatriz(I);
    }
destruirMatriz(A);
destruirMatriz(adjA);
destruirMatriz(I);
return EXIT_SUCCESS;
}
