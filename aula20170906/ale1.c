#include <stdio.h>
#include <time.h>
int main ()
{
     
     int x =rand()%(0-100);
     int y= rand()%(101-293+1);
     printf("o valor do numero pseudo aleatorio entre 0 e 100 eh: %d", x);
     printf("o valor do numero pseudo aleatorio entre 101 e 293 eh: %d",y);
     return 0;
     
}
