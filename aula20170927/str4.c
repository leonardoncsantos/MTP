
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define n 256
int main()
{
char tot[n], aux[7]={'a','e','i','o','s','g','\0'}, op[7]={'4','3','1','0','5','6','\0'};
int v=0, c=0, d=0, e=0, i=0;
printf("Digite a frase:\n");
fgets(tot,n,stdin);
tot[strlen(tot)-1]='\0';
for(v=0;tot[v]!='\0';v++)
{
    if(isalpha(tot[v]))
    if(tot[v]>=65 && tot[v]<=90)
        tot[v]=tot[v]+32;
}
for(i=0;tot[i]!='\0';i++)
{
    if(isalpha(tot[i]))
        for(c=0;c<7;c++)
        {
            if(tot[i]==aux[c])
                tot[i]=op[c];
            else
                tot[i]=tot[i];
        }
}
printf("%s", tot);
return EXIT_SUCCESS;
}
