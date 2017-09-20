#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
double complex fazcomplexo(double a, double b, char c)
{
    if(c=='r')
        return a+I*b;
    else
        return a*cos(b) + I*a*sin(b);
}
void mostracomplexo (double complex Z, char c)
{
    if(c=='r')
        printf("%lf+ I*%lf\n", creal(Z), cimag(Z));
    else
        printf("%lf/_%lf\n",cabs(Z), carg(Z));
}
int main ()
{
    double complex Z1,Z2;
    double a,b;
    printf("entre com o numero complexo Z1(real,imaginario): ");
    scanf("%lf,%lf", &a,&b);
    Z1=fazcomplexo (a,b,'r');
    printf("a soma desses numeros é: \n");
    printf("a soma desses numeros é: \n");
    printf("forma retangular: ");
    mostracomplexo(Z2+Z2,'r');
    printf ("forma polar: ");
    mostracomplexo(Z1+Z2,'p');
    return EXIT_SUCCESS;
}
