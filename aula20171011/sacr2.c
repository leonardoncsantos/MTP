#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado()
{
	return rand()%6 + 1;
}
int main()
 {
    int s=0, cont=1, i, dao;
    srand(time(0));
    char c;
    printf("Que Comecem os jogos - Digite ENTER para rodar o dado ");
    for(i=0; i<3; i++)
    {
        printf("\nRODADA:%i\n", cont);
        do
        {
        scanf("%c", &c);
        dao=dado();
        printf("... %d\n", dao);
        s=s+dao;
        printf("*%d\n", s);
        cont++;
        }
    while(cont<=5 || s<= 18);
    if (s>=18)
        break;
    }
        if(s>=18 && s<=23 && i<3)
    printf("__PARABENS voce venceu!___\n");
        if((s<18 || s>23) && i<3)
    printf("__Nao foi dessa vez :( !___\n");
    return EXIT_SUCCESS;
}
