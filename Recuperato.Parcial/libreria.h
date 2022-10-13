#ifndef LIBRERIA_H_INCLUDED
#define LIBRERIA_H_INCLUDED



#endif // LIBRERIA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct fecha{
    int dia, mes, anio;
}tfecha;

typedef struct articulo{
    char NomArt[20];
    float importe;
    tfecha fechaVec;
}tarticulo;

void leerRegistro (tarticulo *R){
    tarticulo A;
    int i=0, j, fechahoy;

    printf("\n\t Ingres Articulo, Importe, y Fecha de Vncimiento dia, mes, y anio");
    gets(A.NomArt);
    printf("%f", A.importe);
    fflush(stdin);
    scanf("%d", A.fechaVec.dia);
    fflush(stdin);
    scanf("%d", A.fechaVec.mes);
    fflush(stdin);
    scanf("%d", A.fechaVec.anio);
    *R=A;
}
void mostrar articuloVen (tarticulo, A[], int l){
        int i, j;
        articulo=A
        artVen;
        printf("\n\t Ingrese la fcha de hoy dia, mes y anio: %d", fechahoy);
        fflush(stdin);
        scanf("%d",& A.fechahoy.dia);
        scanf("%d", & A.fechahoy.mes);
        scanf("%d", & A.fchahoy.anio);


        for(i=0; i<l; i++){
            if(fecha<fechahoy)
       artVec[i]=A[I];
       printf("\n\n Los articulos vencidos son:  ")
        }
}

     }
}
