#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"

int main(){
Matriz A;
double a;
int ordem;
printf("write array order :  ");
scanf("%d", &ordem);
A=criarMatriz(ordem,ordem);
preencherMatriz(A);
printf("Original: \n");
imprimirMatriz(A);
a= determinante(A);
printf("The Determinant is:\t%lf", a);
return EXIT_SUCCESS;
}
