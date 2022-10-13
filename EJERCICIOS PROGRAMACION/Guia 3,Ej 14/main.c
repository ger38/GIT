#include <stdio.h>
#include <stdlib.h>

int main()
{
 float NUM,MAX,MIN,PROM,ACUM=0;
 int CONT=0;
 printf("Ingrese numeros decimales y 0 = FINALIZAR\n");
 do{
    scanf("%f",&NUM);
    if(CONT==0){//si es el primer numero ingresado
        MIN=NUM;
        MAX=NUM;
    }

       if(NUM!=0){
         if(NUM>MAX)
           MAX=NUM;
         if(NUM<MIN)
           MIN=NUM;
        ACUM=ACUM+NUM;
        ++CONT;
       }
    }
 while(NUM!=0);
    PROM = (ACUM/CONT);
    printf("El maximo de los valores ingresados es: %g\n",MAX);
    printf("El minimo de los valores ingresados es: %g\n",MIN);
    printf("El promedio de los valores ingresados es: %g\n",PROM);




    return 0;
}
