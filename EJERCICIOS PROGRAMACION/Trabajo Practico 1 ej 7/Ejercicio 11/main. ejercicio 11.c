#include <stdio.h>
#include <stdlib.h>

int main() //Ejercicio n°11
{
    int num, mil, cen, dec, un, aux;
    printf("Introdusca un numero de cuatro digitos\n");
    fflush(stdin);
    scanf("%d",&num);
    aux = num%1000;
    mil = num/1000;
    cen = aux/100;
    dec = (aux%100)/10;
    un = num%10;
    printf("\n\n%d",mil);
    printf("\n%d",cen);
    printf("\n%d",dec);
    printf("\n%d\n",un);
    return 0;
}
