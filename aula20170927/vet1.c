#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define N 10000
int main ()
{
   srand(time(0));
   int numeros [N];
   int i, maximo;
   float media=0.f;
   printf("qual é o numero: ");
   scanf("%d", &maximo);
   for(i=0;i<N; i++)
       numeros[i]= rand()% (maximo+1);

   for(i=0; i<N; i++)
        media += numeros[i];
        media/= N;
        printf("a media dos %d numeros eh: %f", N, media );

   return EXIT_SUCCESS;
}
