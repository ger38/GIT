#include <stdio.h>
#include <stdlib.h>

int main()
{
    float aux, auxl, numero;
    printf("Ingrese un valor para x \n");
    fflush(stdin);
    scanf("%g", &numero);
       if(numero<=3){
           aux = (numero*5+2);
                printf("el resultado es: %g", aux);
       }
         else
           if(numero>3){
            auxl = (numero*4-5);
            printf("el resultado es: %g\n", auxl);
           }


    return 0;
}
