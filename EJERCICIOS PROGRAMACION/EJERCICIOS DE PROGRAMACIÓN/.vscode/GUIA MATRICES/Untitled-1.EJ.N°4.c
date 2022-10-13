   //---GUIA MATRIZ EJ.4-----
#include<stdio.h>
#include<stdlib.h>
# define fil 4
# define col 4

int main(){
    int matZ[fil][col], i, j, suma, sumat=0, aux;
    int H=2, P=3, J=0, I=1, T=0, varK = 10;
    //--ciclo para cargar la matriz---
    for(i=0; i<fil; i++){
    printf("CARGUE  LOS DATOS DE LA FILA N°: %d\n", i+1);

      for(j=0; j<col; j++){
          printf("CARGUE LOS DATOS DE LA COLUMNA N°: %d\n", j+1);
          scanf("%d", & matZ[i][j]);
      }
    }
    printf("MUESTRO LA MATRIZ EN FORMA MATRICIAL\n\n");
    for(i=0; i<fil; i++){
        for(j=0; j<col; j++)
        printf("[%d]", matZ[i][j]);
        printf("\n");
    }
    system("pause");

    /////Permutar las columnas H y P (H y P variables enteras)/////
    for ( i=0; i < 4; i++) {
        aux = matZ[i][H];
        matZ[i][H] = matZ[i][P];
        matZ[i][P] = aux;
        printf("[%d]\n", matZ[i][P]);

    }
    system("pause");
    printf("\t LA SUMA DE LA FILA I Y LA FILA J, ALMACENADA EN T\n");
    //-----LA SUMA DE LA FILA I Y LA FILA J, ALMACENADA EN LA FILA T------
    for(i=0; i<4; i++){
        matZ[T][j]=matZ[I][j] + matZ[J][j];
        printf("[%d]", matZ[T][j]);
        printf("\n");
    }
    system("pause");
    printf("\t MLTIPLICAR LA FILA H, POR UNA VARIABLE K\n");

    //-----MULTIPLICAR LA FILA H, POR UNA VARIABLE K-----
    for(j=0; j<4; j++){
        matZ[H][j]=matZ[H][j] * varK;
        printf("[%d]", matZ[H][j]);
        printf("\n");
    }
    system("pause");
    printf("\nMatriz en formato matricial:\n\n");
     for ( i = 0; i < 4; i++) {
       for ( j = 0; j < 4; j++) {
        printf("\t%d", matZ[i][j]);
       }
       printf("\n");
    }

    return 0;
}
