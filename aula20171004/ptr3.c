#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    unsigned char *ponteiro;
    int vetor[]={0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF}, i,nbytes=sizeof(vetor), cont=0;
    printf("End inicial de vetor:%p\n\n", vetor);
    for(i=0, ponteiro=(unsigned char*)vetor; i<nbytes; i++)
    {
        printf("*End:%p=>%d(decimal); %x (hexadecimal)\n",ponteiro+i,*(ponteiro+i),ponteiro[i]);
        if(ponteiro[i])
            cont++;
        printf("End:%p\ndado:%d,%x\n", ponteiro+i,ponteiro[i],*(ponteiro+i));
    }
    printf("De%d\nTEM 0x00:%d\n",nbytes, cont);
    return EXIT_SUCCESS;
}
