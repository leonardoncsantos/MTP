#include<stdio.h>
#include<stdlib.h>

{ 
int main 
  int numero;
  printf("digite um numero natural: ");
  scanf( "%d", &numero);
  if(numero%2==0)
  {
    if(numero%3==0)
      printf("o numero é multiplo de 3");
      
    if(numero%7==0)  
      printf("o numero é multiplo de 7");
  }
  else
  {
    if(numero%5==0)
      printf("o numero é multiplo de 5");
  }
  return 0;
}
