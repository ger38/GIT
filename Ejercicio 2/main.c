//---------EJRCICIO N°3-------
#include <stdio.h>
#include <stdlib.h>
void date(int dd, int mm, int aa);
int main()
{
    int dia, mes, year;
    int B;
    printf(" INGRESE DIA, MES Y AÑO\n");
    scanf("%d %d %d", & dia, & mes, & year);

    date(dia, mes, year);

    return 0;
}
//-------------------------------------
void date(int dd, int mm, int aa){
    int B;
    B=aa % 100;
    printf("%d / %d / %d %d\n", dd, mm, aa, B);
}
//-----------------------------------------
