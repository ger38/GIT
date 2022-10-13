#include <stdio.h>
#include <stdlib.h>
// GUIA DE CICLOS Ej.6 Potencia de X elevado a la Y
int main()
{
    int x, y, i, potencia;
    printf("Ingrese un valor de x\n");
    fflush(stdin);
    scanf("%d", & x);
    printf("Ingrese un valor de y\n");
    fflush(stdin);
    scanf("%d", & y);
    potencia=1;
    for(i=0; i<y; i++){
    potencia=potencia*x;
    }
    printf("\t\t\nLa potencia de x por y: %d\n", potencia);
    return 0;
}
