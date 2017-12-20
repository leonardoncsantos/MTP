#include <stdio.h>
#include <stdlib.h>
#define N 100

typedef
struct stponto {
	int x, y;
}
Ponto;

void insere(int n, Ponto * pponto) {
	int i;
	for (i=0; i < n; i++){
		printf("Ponto: %d\n", i+1);
		scanf("%d", &((pponto+i)->x));
		scanf("%d", &((pponto+i)->y));
	}
}

int main(){
	FILE * arquivo;
	int n; Ponto * pontos;
	char nome_arquivo[N];
	printf("Insira a quantidade de pontos que deseja inserir: \n");
	scanf("%d", &n);
	pontos = (Ponto *) malloc(n*sizeof(Ponto));
	insere(n, pontos);
	printf("\nQual o nome do arquivo: ");
	scanf("%s", nome_arquivo);
	arquivo = fopen (nome_arquivo, "wb");
	fwrite(pontos, 2*sizeof(int), n, arquivo);
	fclose(arquivo);

	free(pontos);
	return EXIT_SUCCESS;
}
