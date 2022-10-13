#include <stdio.h>
#include <stdlib.h>
#include "cabecera.h"
//EJERCICIO N°4//
void date(int *dd, int * mm, int *aa);//FUNCION//
void main ()
{
   int dia, mes,year;
   printf("\tIngrese dia,mes y anio\n");
   scanf("%d%d%d",&dia,&mes,&year);
   date(&dia,&mes,&year);//LLAMADO A LA FUNCION LLEVA &//
   printf("\tEl valor de year es %d\n", year);
   if (year = 0)
   printf("\tSera un buen Anio\n");
   system("pause");
}