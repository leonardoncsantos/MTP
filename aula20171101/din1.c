#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float media(float * numeros, int qtde)
{
   float m=0.0f;
   int i;
   for(i=0;i<qtde; i++)
   		m+=numeros[i];
   m /= qtde;
   return m;
}

float desviopadrao(float * numeros, int qtde)
{
   float m= media(numeros,qtde);
   float dp = 0.0f;
   int i;
   for(i=0; i< qtde;i++)
   		dp += pow(numeros[i]-m,2);
   dp/= qtde-1;
   return sqrt(dp);
 }

int main()
{
   int qtde,i;
   float * numeros;
   printf ("quantos numeros voce precisa? ");
   scanf("%d", &qtde);
   numeros= (float*) malloc(qtde*sizeof(float));
   for(i=0; i< qtde; i++)
   {
     printf ("entre com o %d numero", i+1);
     scanf("%f", numeros+i);
   }
   printf("a media dos numeros eh: %f\n", media(numeros,qtde));
   printf("o desvio padrao dos numeros eh: %f", desviopadrao(numeros,qtde));
   free(numeros);
}
