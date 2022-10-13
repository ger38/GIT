  //---EJERCICIO N°5----
  #include<stdio.h>
  #include<stdlib.h>
  # define F=5
  # define C=5

  void main(){
      int mat[F][C], i, j, suma, sumat=0;

      for(i=0; i<F; i++){
          printf("CARGAR LOS VALORES DE LA FILA N°: %d\n", i+1);
          for(j=0; j<C; j++){
              printf("\t INGRESE LOS VALORES DE LA COLUMNA N°: %d\n", j+1);
              scanf("%d", & mat[i][j]);
          }
      }
      //---PARA MOSTRAR LA MATRIZ CUADRADA-----
      for(i=0; i<F; i++){
          for(j=0; j<C; j++)
          printf("[%d]", mat[i][j]);
          printf("\n");
      }
      //---SUMA DE DIAGONAL PRINCIPAL----
      for(i=0; i<F; i++){
          for(j=0; j<C; j++)
           if(i==j)
           suma += mat[i][j];
      }
      printf("\t LA SUMA DE LA DIAGONAL PRINCIPAL ES: %d\n", suma);
      
      //---SUMA DE LA DIAGONAL SECUNDARIA---
         suma=0;
      for (i=0; i < F; i++){
          for(j=C-1; j>=0; j--)
           if(i==j)
           suma+=mat[i][j];
      }
      printf("\t LA SUMA DE LA DIAGONAL SECUNDARIA ES: %d\n", suma);
          /* code */
      return 0;
      
  }