#include <stdio.h>
#include <stdlib.h>
// Ejercicio 6 del trabajo practico n°1
int main()
{
    int seg, aux, HH, MM, SS;
    printf("Ingresa los segundos totales...\n");
    fflush(stdin);
    scanf("%d",& seg);
    HH = seg / 3600;
    aux = seg % 3600;
    MM = aux / 60;
    SS = aux % 60;
    printf("\nEn:%d segundos hay %d Horas, %d Minutos y %d Segundos", seg, HH, MM,SS);
    return 0;

}

