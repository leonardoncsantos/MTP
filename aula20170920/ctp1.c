#include <stdio.h>
#include <stdlib.h>
#define N 256
#include <ctype.h>
int main ()
{
   char frase[256];
   int i=0;
   printf("entre com a frase: /n");
   fgets(frase,N,stdin);
   for(i=0;frase[i];i++)
   {
       frase[i]=toupper(frase[i]);
       printf("%s",frase);
   }
   return EXIT_SUCCESS;

}
