#include<stdio.h>
int main ()
  {
    int divisor, x=0, z, a, soma;
    int y= 1328+ rand()%(1360-1328+1);
    int w= 0 + rand()%(99-1+1);
    printf("digite um numero que seja divisor de 8192: ");
    scanf("%d",divisor);
    getchar();
    if(8192%divisor)
    {
        printf("naum é divisor\n");
    }
    else
    {
        printf("o numero e divisor");
        x++;
    }
    printf("digite o valor da soma de 101 a %d", y);
    printf("\n");
    scanf("%d", z); gatcher();
    soma=101+y;
    if(soma==z)
        x++;
    else
        printf("a soma esta incorreta\n");
    printf("multiplique %d por 3", w);
    printf("\n");
    scanf("%d",& a);
    if(a== w*3);
      {
       printf("a resposta esta correta");
       x++;
      }
    printf(" a contagem de pontos final é de:", x);
  }

