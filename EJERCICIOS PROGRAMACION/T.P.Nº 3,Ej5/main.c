#include <stdio.h>
#include <stdlib.h>
// EJERCICIO N°5 GUIA 3 CICLOS //

int main()
{
    int i;

     printf("\t\t\nMostrar por pantalla los 10 primeros numeros naturales con for\t\t\n");

    for(i=0; i<10; i++){
          printf("%5d", i);
      }
    printf(" \t\t\n\nMostrar valor final de i: %d\n\n", i);
    i=0;
    while(i<10){
      printf("%5d", i);
      i++;
    }
    printf("\n\n\n");


    printf("\t\t\tMostrar por pantalla los N primeros numeros pares\n\n");
    i=0;
    int num, numpar;
    printf("INGRESE UN NUMERO:\n\n");
    fflush(stdin);
    scanf("%d", & num);
    printf("\n\n Los primeros numeros pares son: %d", num);
       for(numpar=0; i<num; i++){
           numpar=numpar+2;
           printf("%5d", numpar);
          }

   printf("\t\t\n\n");

   int k,n;
   printf("Ingrese un numero K \n\n\n");
   fflush(stdin);
   scanf("%d", & k);
   printf("Ingrese otro numero N \n\n\n");
   fflush(stdin);
   scanf("%d", & n);

   printf("\t\t\n\n La suma de los N primeros multiplos de K\n");
     for(i=1; i<=n; i++){
     printf("%4d" , i*k);
   }

    printf("\n\n\n");



    printf("\t\tMostrar los numeros enteros comprendidos entre el intervalo [-K y K] en orden ascendente\n\n");

    printf("\t\t\tIngrese un numero K");
    fflush(stdin);
    scanf("%d", & k);
        for(i=-k; i-1<k; i++){
        printf("%4d", i);
        num=i+1;
        }

         if(k<0){
            for(i=k; i-1<-k; i++){
                printf("%4d", i);
                num=i+1;
            }
         }
     else
        printf("\t\\n\ntEl valor ingresado no puede ser 0");

    printf("\n\n");

    printf("\t\n Mostrar por pantalla el intervalo[-K...K] en orden descendente\t\n");
    printf("\t\n Ingrese un valor de K");
    fflush(stdin);
    scanf("%d", & k);
    for(i=k; i>-k; i--){
     printf("%4d", i);
     }
       if(k=0){
          printf("\t\t\n\nVuelva a ingresar un valor de K!=0");
          }

    printf("\n\n");
    int j;
    printf("Mostrar por pantalla los terminos de una sucesion 1,3,6,10,15,21,28 menores que K");
    printf("\t\t\n\n Ingrese un valor de K");
    fflush(stdin);
    scanf("%d", & k);
    i=1;
    j=1;
    do{
        printf("%5d", j);
        i++;
        j=i*(i+1)/2;
    }
        while(j<k);
        printf(" Mostrar la sucesion %5d\n\n", j);





}

