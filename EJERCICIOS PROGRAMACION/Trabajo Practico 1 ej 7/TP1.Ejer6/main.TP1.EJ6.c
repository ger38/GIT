#include <stdio.h>
#include <stdlib.h>

int main()  //Ejercicio n°6
{
    int pies, yardas, pulgadas, cent, metros;

    printf("Introdusca una medida en pies\n");
    fflush(stdin);
    scanf("%g", &pies);
    pulgadas = pies/12;
    yardas = pies*3;
    cent = (pies/12)*2,54;
    printf("\nEn tantos pies hay: %g,%g,%g,%g", yardas,pulgadas,cent,metros);


    return 0;
}
