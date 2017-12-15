
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 1000
int main()
{
srand(time(0));
int numeros[n];
int i, maximo=1;
int media=0, mex=0;
printf("Entre com um numero maximo a ser sorteado, entre 1 e 1000:\n");
scanf("%i", &maximo);
for(i=0;i<maximo;i++)
{
    numeros[i]=rand()%(10);
}
for(i=0;i<maximo;i++)
{
if(numeros[i]<=media)
    media=numeros[i];
if(numeros[i]>=mex)
    mex=numeros[i];
}
printf("maximo:%i\n minimo:%i",mex,media);
return EXIT_SUCCESS;
}
