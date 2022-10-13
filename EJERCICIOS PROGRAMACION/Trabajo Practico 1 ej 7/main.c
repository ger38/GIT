#include <stdio.h>
#include <stdlib.h>

int main()
{

    float Ctg,Fag;
    printf("\n Ingresar la cantidad de Grados Celcius a transformar \n");
    fflush(stdin);
    scanf("%2f", &Ctg);
    Fag = 9.00/5.00 * Ctg + 32.00;
    printf("%2f, grados Fag: \n", Fag);

}
