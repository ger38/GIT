/*EJERCICIO //FUNCIONES
MAIN:C
/*
#include <stdio.h>
#include <stdlib.h>

//-----------------------------------------------------------------------------
int menu();
void sumar();
float restar(float c,float d);
void multiplicar(float a, float b);

//-----------------------------------------------------------------------------
int main()
{
    int op;
    float a,b,c;
    op=menu();
    while(op!=0){
        switch (op){
            case 1:{
                sumar();
                }
                break;
            case 2:{
                printf("\n\tIngrese los dos valores a restar\n");
                scanf("%g%g",&a,&b);// c=restar(a,b);
                printf("\n\tLa resta de %g menos %g es %g",a,b,restar(a,b));
                //system("pause");
                 }
                  break;
            case 3:{
                printf("\n\tIngrese los dos valores a multiplicar\n");
                scanf("%g%g",&a,&b);
                multiplicar(a,b);
                //system("pause");
                  }
            }
        op=menu();
    }
    return 0;
}

//-----------------------------------------------------------------------------
int menu(){
    int opc;
    do{
        //system("cls");
        printf("\n\tSelecciones una Opcion del Menu\n\n");
        printf("\t1 Sumar\n");
        printf("\t2 Restar\n");
        printf("\t3 Multiplicar\n");
        printf("\t4 Dividir\n");
        printf("\t5 Funcion no definida\n");
        printf("\t0 Finalizar Aplicacion\n");
        scanf("\t%d",&opc);
    }
    while(opc < 0 || opc > 5);
    return (opc);
    }
//-----------------------------------------------------------------------------
void sumar(){
    float x,y;
    //system("cls");
    printf("\n\tIngrese los valores a Sumar X e Y\n");
    scanf("%f%f",&x,&y);
    printf("\n%g MAS %g ES %g\n",x,y,x+y);
    //system("pause");
}
//-----------------------------------------------------------------------------
float restar(float c,float d){
    return(c-d);
}

//-----------------------------------------------------------------------------
void multiplicar(float p, float q){
    printf("\tEl producto de %g por %g es: %g", p,q,p*q);
}
*/
//-----------------------------------------------------------------------------
//----------------------------------------------------------------------------
// FILE/NEW /EMPTY FILE/SEGUIR LOS CUADROS DE DIALOGO POR DEFECTO Y
// COLOCAR EL NOMBRE DEL ARCHIVO .H
#include <stdio.h>
#include <stdlib.h>
#include "Libreria1.h.c"

int menu();
void intercambioxValor(int x,int y);
void intercambioxReferencia(int *x,int *y);

int carga(int v[20]);
void muestra(int v[20],int k);

//-----------------------------------------------------------------------------
int main(){
      int operacion,n1,n2,L,ll;
    int vec1[20],vec2[20];
    printf("\t\tUtilizacion de parametros por referencia!\n");

    operacion=menu();
    while(operacion!=0){
       switch (operacion){
          case 1:{
                 printf("\n\t\tIngrese dos valores enteros para intecambio x valor....\n");
                 scanf("%d%d",&n1,&n2);
                    intercambioxValor(n1,n2);
                 printf("\n\t\tEn MAIN N1 vale %d y N2 vale %d\n\n",n1,n2);
                 //system("pause");
                }
               break;
          case 2:{
                 printf("\n\t\tIngrese dos valores enteros para intecambio x valor....\n");
                 scanf("%d%d",&n1,&n2);
                 intercambioxReferencia(&n1,&n2);
                 printf("\n\t\tEn MAIN N1 vale %d y N2 vale %d\n\n",n1,n2);
                 //system("pause");
                }
               break;
          case 3:{
                printf("CARGA ESTUDIANTES DE MIRAMAR\n");
                 L=carga(vec1);
                  printf("CARGA ESTUDIANTES DE MAR DEL PLATA\n");
                 ll=carga(vec2);
                 //printf("\t\tCargaste %d elementos",L);
                 }
               break;
          case 4:
                 printf("MUESTRA DE ESTUDIANTES DE MIRAMAR\n");
                muestra(vec1,L);//miramar
                  printf("MUESTRA DE ESTUDIANTES DE MAR DEL PLATA\n");
                 muestra(vec2,ll);//mdp
               break;
                 }
       operacion=menu();
    }
    return 0;
}

//-----------------------------------------------------------------------------