#include<stdio.h>
int main ()
{
    int vetor={0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF}
    unsigned char *ponteiro
    int nbytes=sizeof(vetor);
    int i, contagem=0;
    for(i=0; i<nbytes; i++)

    {
        if(ponteiro(i))
            contagem++;
        printf("End.: %p, dado: %d, %X\n", ponteiro +i, ponteiro[i], * (ponteiro+i));
    }
    printf("dos %d bytes, %d sao diferentes de 0x00.\n", nbytes, contagem);
    return 0;
    }

}
