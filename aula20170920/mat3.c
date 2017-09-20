#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    double n,b,log;
    printf("digite o logaritmando e a base desejada do log: \n");
    scanf("%d", &n);
    getchar();
    scanf("%d",&b);
    log= log10(n)/log10(b);
    printf("o valor do log de n na base b eh: %f",log);
    return 0;
}
