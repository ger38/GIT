#include <stdio.h>
#include <stdlib.h>
//GUIA 3 ESTRUCTURA DE CONTROL Y REPETICION Ej. n°8

int main()
{
    int i=0;
    float A, B, x,y, ACUM=0, num, prom, cont;
    printf("Ingrese dos numeros decimales A y B (A<B)\n");
    fflush(stdin);
    scanf("%g%g", & A, & B);
    while(A>=B){
        printf("Ingrese un valor de A menor que B! \n");
        scanf("%g%g", & A, & B);
    }
    while(num){
    printf("\t\t\n\nIngrese un numero decimal distintos de 0\n\n");
    fflush(stdin);
    scanf("%f", & num);
    printf("\n Desea ingresar otro numero, si para continuar, 0 para finalizar");
    }

     do
     {
         fflush(stdin);
         scanf("%g %g",&A, &B);
         if((A>num)&&(num<B)){
          ACUM=ACUM+num;
          cont++;
          }

     }
     while(A<num && B>num){
       if((num>A) && (num<B)){
      prom=ACUM/cont;
         printf("\n\nPara estos numeros, el promedio entre A y B  es: %f\n\n", prom);
       }
     }


    return 0;
}


