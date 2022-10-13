#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seg,aux,HH,MM,SS;
    printf("Ingresar los segundos totales\n");
    fflush(stdin);
    scanf("%d",&seg);
    HH = seg/3600;
    aux = seg%3600;
    MM = aux/60;
    SS = aux%60;
    printf("\n En:%d segundos hay %d Horas, %d Minutos y %d Segundos", seg,HH, MM,SS);

}
