#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"
int main()
{
Matriz A,B,C;
int colunaA,linhaA, colunaB,linhaB, i, acumula;
printf("how much lines and columns of A, (line,column) \n");
scanf("%d,%d", &linhaA, &colunaA);
printf("how much lines and columns of B, (line,column) \n");
scanf("%d,%d", &linhaB, &colunaB);
if(colunaA==linhaB)
{
A=criarMatriz(linhaA,colunaA);
B=criarMatriz(linhaB,colunaB);
C=criarMatriz(colunaA,linhaB);
printf("write the matrix A! \n\n");
preencherMatriz(A);
printf("write the matrix B! \n\n");
preencherMatriz(B);
C= producted(A,B,C,linhaA,colunaA, linhaB,colunaB);
imprimirMatriz(C);
destruirMatriz(C);
destruirMatriz(A);
destruirMatriz(B);
}
else
printf("It's not possible to multiply the matrices! \n\n");
return 0;
}
