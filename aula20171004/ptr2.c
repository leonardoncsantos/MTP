#include<stdio.h>
int main ()
{
    int vetor[] = { 0,1,2,4,8,16,1025};
    unsigned char * ponteiro; //aponta para bytes
    int nbytes = sizeof(vetor);
    int i, contagem= 0;
    ponteiro= (unsigned char *)vetor;
    for(i=0, ; i<nbytess; i++)
    {
        if(! ponteiro[i]) contagem++;//
        printf("End.: %p, dado: %d, %X\n", ponteiro +i, ponteiro[i], * (ponteiro+i));
    }
    printf("dos %d bytes, %d estao com 0x00.\n", nbytes, contagem);
    return 0;
}
