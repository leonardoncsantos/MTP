#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main()
{
	Matriz A, adjA;
	int ordem;
	printf("write the order of matrix: ");
	scanf("%d", &ordem);
	A = criarMatriz(ordem, ordem);
	preencherMatriz(A);
	imprimirMatriz(A);
	adjA = adjunta(A);
	printf("Adjunct:\n");
	imprimirMatriz(adjA);
	destruirMatriz(A);
	destruirMatriz(adjA);
	return EXIT_SUCCESS;
}
