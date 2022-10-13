#include <stdio.h>
#include <stdlib.h>

int main()
{
    int peso, edad, altura;
    printf("Ingrese su peso\n");
    fflush(stdin);
    scanf("%d",&peso);
    printf("Ingrese su edad");
    fflush(stdin);
    scanf("%d", &edad);
    printf("Ingrese su altura");
    fflush(stdin);
    scanf("%d", &altura);

          if (peso > 100)
             printf("Tenes obesidad\n");
          else
             printf("No tenes obesidad\n");
          if (edad < 18)
             printf("Es riesgoso para la salud");
          else
             printf("No tenes riesgo\n");
          if (altura > 1)
             printf("Haga dieta");
    return 0
}
