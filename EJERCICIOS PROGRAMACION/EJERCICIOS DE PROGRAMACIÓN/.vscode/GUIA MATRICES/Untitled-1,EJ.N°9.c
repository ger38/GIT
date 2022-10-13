//---EJERCICIO N°9-----
#include<stdio.h>
#include<stdlib.h>

int main() {

    int T[4][3]= {
        {8, -9, 4},
        {3, -5, -2},
        {7, -6, 1},
        {2, -3, -8}
    };
    int pos[12];
    int neg[12];
    int iNeg=0;
    int iPos=0;
    

    for ( int i=0; i < 4; i++) {
        for ( int j=0; j < 3; j++) {
            if (T[i][j]< 0){
                neg[iNeg] = T[i][j];
                iNeg++;
            }else{
                pos[iPos]= T[i][j];
                iPos++;
            }
         }
        }
    

    printf("Los elementos del VECTOR negativo son:\n");
    for (int i = 0;  i < iNeg; i++){
        printf("- [%d]\n", neg[i]);       
    }

    printf("Los elementos del VECTOR positivo son:\n");
    for (int i = 0;  i < iPos; i++){
        printf("- [%d]\n", pos[i]);       
    }
   
    return 0;
}
