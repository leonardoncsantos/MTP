#include <stdio.h>
#include <stdlib.h>
#define N 256
#include <ctype.h>
int main ()
{
   char frase[256];
   int i=0;
   int cont=0;
   printf("entre com a frase: \n");
   fgets(frase,N,stdin);
   for(i=0;frase[i]!='\0';i++)
   {
        if(isalpha(frase[i]));
            cont++;
   }
   printf("o numero de letras eh: %d",cont);
   return EXIT_SUCCESS;

}
