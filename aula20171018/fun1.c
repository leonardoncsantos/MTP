#include<stdio.h>
#include<stdlib.h>
int soma(int num, int den, int nume, int deno, int * pnum, int *pden)
{
    if(den==0 || deno==0)
        return 0;
    else
    {
        *pnum=deno*num+den*nume;
        *pden=den*deno;
        return 1;
    }
}
int main()
{
    int num, nume, den, deno, rep, pden, pnum;
    printf("Digite um numero racional da forma numerador/denominador:\n");
    scanf("%d/%d", &num, &den);
    printf("Digite outro numero racional da forma numerador/denominador:\n");
    scanf("%d/%d", &nume, &deno);
    if(soma(num,den, nume, deno, &pnum, &pden))
        printf("\nResposta:%d/%d\n",pnum,pden);
    else
        printf("___ERRO___");
    return EXIT_SUCCESS;
}
