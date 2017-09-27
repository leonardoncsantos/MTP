#include<stdio.h>
#include<stdlib.h>
#define N 256
#include <ctype.h>
int main ()
{
    char str [N];
    printf ("entre com uma frase: ");
    fgets(str, N, stdin);
    for(i=0; i<N ; i++) str[i] =toupper(str[i]);
    print("o tamanho da string eh: %d", strlen(str));
    return EXIT_SUCCESS;
