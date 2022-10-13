#include <stdio.h>
#include <stdlib.h>

int main()
{
    int peso, edad;
    printf("Ingrese su peso y su edad\n");
    fflush(stdin);
    scanf("%d",&peso);

          if (peso > 100)
             printf("Tenes obesidad\n");
          else
             printf("No tenes obesidad\n");
    scanf("%d", &edad);
          if (edad < 18)
             printf("Es riesgoso para la salud");
          else
             printf("No tenes riesgo\n");

    return 0;
}
