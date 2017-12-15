#include<stdio.h>
#include<stdlib.h>
int main()
{
int num[10];
int soma=0, mult=1,i;
for(i=0;i<10;i++)
{
    printf("Digite o numero %d:\n", i+1);
    scanf("%i", &num[i]);
}
for(i=0;i<10;i++)
{
    soma+=num[i];
    mult*=num[i];
}
    printf("A soma eh:%i\n o produto eh %i:\n", soma, mult);
return EXIT_SUCCESS;
}

