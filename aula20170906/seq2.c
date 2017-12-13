#include <stdio.h>

int main ()
  {
    float basetriangulo, alturatriangulo, areatriangulo;
    printf("entre com a base do triangulo: ");
    scanf("%f", &basetriangulo);
    printf(" entre com a altura do triangulo: ");
    scanf("%f", &alturatriangulo);
    areatriangulo= (basetriangulo *alturatriangulo)/2;
    printf(" a area do triangulo eh: %f", areatriangulo);
    return 0;
}
           
