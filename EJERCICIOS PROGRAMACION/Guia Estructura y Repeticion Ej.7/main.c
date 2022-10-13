#include <stdio.h>
#include <stdlib.h>
//GUIA DE ESTRUCTURA Y REPETICION EJ. N°7
int main()
{
    int i=2, z;
    printf("Ingrese un n° entero para verificar si es primo o no\n\n");
    fflush(stdin);
    scanf("%d", & z);
    while((i<z) && (z%i!=0)){
    i++;
    }
    if(z==i)
      printf("El numero z %d es primo \n", z);
    else
      printf("El numero z %d no es primo \n", z);

    printf("Hello world!\n");
    return 0;
}
