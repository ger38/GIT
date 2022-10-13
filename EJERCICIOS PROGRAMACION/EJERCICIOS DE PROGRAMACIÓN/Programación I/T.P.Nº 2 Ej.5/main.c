#include <stdio.h>
#include <stdlib.h>

int main()
{
    float aux, auxl, numero;
    printf("Ingrese un valor para x \n");
    fflush(stdin);
    scanf("%g", &numero);
       if(numero<3){
           aux = (numero*5+2);
                printf("el resultado es: %g", aux);
       }
           if(numero>3){
            auxl = (numero*4-5);
            printf("%g%g",aux / auxl);
           }


    return 0;
}
