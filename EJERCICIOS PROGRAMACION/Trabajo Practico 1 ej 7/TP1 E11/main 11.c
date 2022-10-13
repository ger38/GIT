#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,mil,cen,dec,un,aux;
    printf("Ingrese un numero de 4 cifras:\n\n");
    fflush(stdin);
    scanf("%d",&num);
    aux = num %1000;
    cen = aux /1000;
    dec = (aux%100)/10;
    un = num%10;

    printf("\n\n%d",mil);
    printf("\n%d",cen);
    printf("\n%d",dec);
    printf("\n%d\n",un);


    return 0;
}
