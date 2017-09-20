#include <stdio.h>
#include <stdlib.h>
int main()
{
    int L1,L2;
    int A;
    float ang;
    printf("digite o valor do lado 1 e 2 do triangulo: \n");
    scanf("%d,%d", &L1, &L2);
    printf("digite o angulo formado entre esses lados em radianos: \n");
    scanf("%f",ang);
    A=sqrt((L1*L1)+(L2*L2)-(2*L1*L2*cos(ang)));
    return A;
}
