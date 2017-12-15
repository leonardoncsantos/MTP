#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    unsigned int a=0xFACA8421;
    unsigned char *ponteiro;
    int i;
    printf("End:%p; dado em decimal:%d\n", &a, a);
    ponteiro=(unsigned char *)&a;
    for(i=0;i<sizeof(a); i++)
        printf("*End:%p=>%d(decimal); %X (hexadecimal)\n",ponteiro+i,*(ponteiro+i),ponteiro[i]);
    return EXIT_SUCCESS;
}
