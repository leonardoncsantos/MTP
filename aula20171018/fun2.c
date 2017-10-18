#include <stdio.h>

void func(int x1, int x2)
{
    printf("o quociente e o resto dos numeros sao, respectivamente: %d e %d", x1/x2, x1%x2 );
}

int main ()
{
    int d1, d2;
    printf("digite dois numeros inteiros: ");
    scanf("%d", &d1);
    scanf("%d", &d2);
    func( d1,d2);
    return 0;
}
