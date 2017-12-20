#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float b, c, A, a;
    printf("Entre com o lado b do triangulo: ");
    scanf("%f", &b);
    printf("Entre com o lado c do triangulo: ");
    scanf("%f", &c);
    printf("Entre com o angulo entre b e c em rad: ");
    scanf("%f", &A);
    a = sqrt(pow(b, 2)+pow(c, 2)- 2*b*c*cos(A));
    printf("O valor de a e': %f", a);
    return EXIT_SUCCESS;
}
