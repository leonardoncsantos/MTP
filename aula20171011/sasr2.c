#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#define N 256

void par()
 {
    int i; // 0 a 8
    for(i=1; i<=20; i++)
        if (i%2==0)
        printf("*%i\n", i);
}
void impar()
 {
    int i; // 0 a 8
    for(i=1; i<=20; i++)
        if (i%2!=0)
        printf("*%i\n", i);
}
int main()
{
    int str, i;
    printf("Digite '1' para ver os numeros impares e '2' para ver os pares: \n");
    scanf("%i", &i);
    if(i==1)
        impar();
	if(i==2)
        par();
    if(i!=1 && i!=2)
        printf("Opcao invalida!");
    return EXIT_SUCCESS;
}
