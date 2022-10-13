#include <stdio.h>
#include <stdlib.h>
# define TAM 4

// GUIA MATRICES EJERCICIO N°1//
int main()
{
float M[TAM][TAM],T[TAM][TAM];
int F,C,i,j;
printf("\n\nIngrese la cantidad de filas\n");
scanf("%d",&F);
printf ("\n\nIngrese la cantidad de columnas\n");
scanf("%d",&C);
for (i = 0;i < F;i++) {
 for (j = 0;j < C;j++) {
 printf("\n\nIngrese el valor de la componente [%d][%d]\n\n ",i,j);
 scanf("%f",&M[i][j]);
 }
}
for (i = 0;i < F;i++) {
 for (j = 0;j < C;j++) {
 T[i][j] = M[i][j]+i+j;
 }
}
for (i = 0;i< F;i++) {
 for (j = 0;j < C;j++) {
 printf("%g",T[i][j]);
 }
 printf("\n");
}


    printf("Hello world!\n");
    return 0;
}
