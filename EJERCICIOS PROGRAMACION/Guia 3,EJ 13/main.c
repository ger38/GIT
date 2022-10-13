#include <stdio.h>
#include <stdlib.h>

int main()
{
   int cantal,x,i,j,nota;
   float prom,acum=0,max=0;
   char codcarr[6],nombre[30],nombremax[30];

   printf("Cantidad de estudiantes?\n");
   scanf("%d",&cantal);
   for(i=0;i<cantal;i++){//cantidad de estu del curso
       printf("Ingrese Nombre estudiante y Cod Carrera\n");
       scanf("%s",nombre);
       scanf("%s",codcarr);
       printf("Cuantas materias tiene?\n");
       scanf("%d",&x);
       acum=0;
       for(j=0;j<x;j++){ //cantidad de materias de c estu
           scanf("%d",&nota);
           acum = acum + nota;
       }
       prom=acum/x;
       if(prom>max){
           max=prom;
           strcpy(nombremax,nombre);
       }

   }
    printf("El mejor estudiante es: %s\n",nombremax);
    printf("El promedio es: %g",max);
}

    printf("Hello world!\n");
    return 0;
}
