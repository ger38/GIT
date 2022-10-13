#include <stdio.h>
#include <stdlib.h>

///GUIA DE ARREGLOS EJERCICIO N°7/////
int main()
{
    int dias[] = {0,1, 2, 3 , 4, 5, 6,}; // DOMINGO, LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO///
    int ventaspordia[] = {1, 2, 1 , 1, 2, 2, 1}, i;
    int totalventas=0, minefectivo=0, maxfacturado=0, promefectivo=0, promtarjeta=0;
    float caja1[] = {34.89, 56.00, 78.00, 0.00, 45.00, 89.56, 34.78}; //VENTAS EN EFECTIVO
    float caja2[] = {34.89, 567.45, 89.00, 32.90, 67.89, 12.00, 78.34}; //VENTAS CON TARJETA



    for(i=0; i<7; i++){
      totalventas+=ventaspordia[i];
      }
    printf("\t\tEL TOTAL DE VENTAS ES: %d\n\n", totalventas);

    /////DIA DE MENOR FACTURACION EN EFECTIVO////
    for(i=1; i<7; i++){
        if(caja1[i] < caja1[minefectivo]){
        minefectivo = i;  ///SE GUARDA POSICION QUE EQUIVALE AL DIA
        }
    }
    printf("EL DIA QUE INGRESO MENOS EFECTIVO ES: %d\n\n", minefectivo);

    ////EL DIA DE MAYOR FACTURACION////
    for(i=1; i<7; i++){
       if(caja1[i] + caja2[i] > caja1[maxfacturado] + caja2[maxfacturado]){
        maxfacturado =i;  ///SE GUARDA LA POSICION DEL DIA///
        }
    }
    printf("EL DIA DE MAYOR FACTURACION ES: %d\n\n", maxfacturado);

    ////PROMEDIOS///
    promefectivo = (caja1[maxfacturado] * 100) / totalventas;
    printf("\t\tEL PROMEDIO DE VENTAS EN EFECTIVO ES: %g\n\n", promefectivo);
    promtarjeta = (caja2[maxfacturado] * 100) / totalventas;
    printf("\t\tEL PROMEDIO DE VENTAS EN TARJETA ES: %g\n\n", promtarjeta);

}
