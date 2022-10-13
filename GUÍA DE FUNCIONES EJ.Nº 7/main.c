// EJERCICIO N°7------
//---SUMA DE DOS FRACCIONES INTRODUCIENDO NUMERADORES Y DENOMINADORES-----

#include <stdio.h>
#include <stdlib.h>
#include "Libreria.h"
float sumadosfracciones(float S);
int main()
{
    int e, f, g, h;
    float suma;
    printf("ESTE ES UN PROGRAMA QUE SUMA DOS FRACCIONES\n");
    suma=sumadosfracciones(suma);
    return 0;
}


float sumadosfracciones(float S){
    int a, int b, int c, int d;
    float M, N1,N2;
    printf(" Introduce el valor del numerador 1");
    scanf("%d \n", & a);
    printf(" Introduce el valor del denominador 1");
    scanf("%d \n", & b);
    printf(" Introduce el valor del numerador 2");
    scanf("%d \n", & c);
    printf(" Introduce el valor del denominador 2");
    scanf("%d \n", & d);
    if(a<1 || a>9 || b<1 || b>9 || c<1 || c>9){
        printf("Error \n");
        printf("Los valores deben estar entre 1 y 9 \n");
        system("pause");
        system("cls");
        goto reinicio;
    }
    else{}

    N1=a/b;
    N2=c/d;
    M=N1+N2
    S=M;
    return S; */
   //-- printf(" LA SUMA DE AMBAS FRACCIONES ES: %g \n\n", M);
}
