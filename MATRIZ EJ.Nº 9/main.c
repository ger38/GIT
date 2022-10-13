#include <stdio.h>
#include <stdlib.h>



    //---EJERCICIO N°9-----

int main() {
    int i, j;

    int T[4][3]= {
        {8, -9, 4},
        {3, -5, -2},
        {7, -6, 1},
        {2, -3, -8}
    };
    int pos[12];
    int neg[12];
    int acuNeg=0;
    int acuPos=0;


    for (i=0; i < 4; i++) {
        for (j=0; j < 3; j++) {
            if (T[i][j]< 0){
                neg[acuNeg] = T[i][j];
                acuNeg++;
            }else{
                pos[acuPos]= T[i][j];
                acuPos++;
            }
         }
        }


    printf("Los elementos del VECTOR negativo son:\n");
    for (i = 0;  i < acuNeg; i++){
        printf("- [%d]\n", neg[i]);
    }
    system("pause");
    printf("Los elementos del VECTOR positivo son:\n");
    for (i = 0;  i < acuPos; i++){
        printf("- [%d]\n", pos[i]);
    }

    return 0;
}



