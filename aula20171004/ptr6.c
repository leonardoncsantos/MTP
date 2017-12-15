#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define n 16
int main()
{
    char str[n];
    int * varredura=(int*)str;
    int i=0;
    for(i=0;i<n;i++)
        str[i]='\0';
    printf("Entre com uma phase de 15 character : ");
    fgets(str,n,stdin);
    for (i=0;i<n/sizeof(int); i++)
        printf("End.:%p=>dado:%d(dec),\n %x (hex)\n",varredura+i,varredura[i],varredura[i]);
    printf("codigo:\n");
    for(i=0;i<n/sizeof(int);i++)
        printf("%d", varredura[i]);
    printf("\n");
    return EXIT_SUCCESS;
}
