//---Ejercicio 4--------
#include <stdio.h>
#include <stdlib.h>

void date(int *dd, int *mm, int *aa);


void main()
{
    int dia, mes, year;
    printf(" INGRESE DIA, MES Y ANIO\n");
    scanf("%d %d %d", & dia, & mes, & year);
    date(&dia, &mes, &year);
    printf("EL VALOR DE YEAR %d\n", year);
    if(year=0)
       printf("\t SERA UNB BUEN ANIO\n");
       system("pause");


    return 0;
}
//-------------------------------------
void date(int *dd, int *mm, int *aa){
    int B;
    B=*aa % 100;
    printf("%d / %d / %d %d\n", dd, mm, B);
    *aa=B;
}
//-----------------------------------------
