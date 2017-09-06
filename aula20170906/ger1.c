#include <stdio.h>

int main ()
{
   int numero;
   int i;
   printf("entre com o numero: ");
   scanf("%d", &numero); getchar();
   for(i=2; i<numero;i++)
   {
      if(numero%i==0)
      break;
   }
   if(i==numero)
      printf("prim0!!\n");
   else
      printf("não é primo!\n");
    return 0;
}
