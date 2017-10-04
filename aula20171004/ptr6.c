#include <stdio.h>
#define N 16
int main()
{
   char str[N];
   int * varredura=(int *)str;
   int i=0;
   for(i=0; i<N; i++)
   str[i]= '\0';
   print(" Entre com texto (%d caracteres max):\n", N-1);
   fgets(str,N,stdin);//n indica a qtd maxima de caracteres
   for(i=0; i<N/sizeof(int); i++)
       printf(" end.: %p => dado: d% (decimal), %X (hex)\n", varredura+i, varredura[i], varredura[i]);
   return 0;

}
