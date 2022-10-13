//FUNCION POR REFERENCIA //
#include "cabecera.h"
void date(int *dd, int * mm, int *aa) {
int b;
b = *aa % 100;
printf("%d %d %d\n",dd,mm,b);
*aa = b;
}
