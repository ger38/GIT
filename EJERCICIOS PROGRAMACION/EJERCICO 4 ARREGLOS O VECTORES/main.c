#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//////EJERCICIO N°4///////////
int main()
{
    float a[]={2.00, 4.75, 3.00, 0, 8.34, 2.45, -6.00, -3.78, 4.00};
    float b[9], c[9];
    float k, sumanegativos=0, prodpositivos=1;
    int acumB=0, acumC=0, i;

    /////////////PARTE 1/////////
    printf("INGRESE UN VALOR PARA K\n\n");
    fflush(stdin);
    scanf("%f", &k);
    for(i=0; i<9; i++){
        if(a[i] !=k){
           b[acumB] = a[i];
           acumB++;
        }
    }
    if(acumB==0){
       printf("EL ARREGLO/VECTOR NO TIENE ELEMENTOS\n\n");
       }
    else{
       printf("EL ARREGLO/VECTOR CON ELEMENTOS DISTINTOS DE K\n\n");
       for(i=0;i<acumB; i++){
          printf("[%.2f] -", b[i]);
          }
    }
    printf("\t\t\n\n");
  system("pause");
      /////PARTE 2////////////////

acumB=0;
for(i=0;i<9; i++){
    if(i % 2 ==0 ){ //SI ES PAR LA POSICION//
      b[acumB] = a[i];
        acumB++;
    }

    else{
      c[acumC] = a[i];
        acumC++;

   }
}
   printf("EL ARREGLO A\n\n");
   for(i=0; i<9; i++){
      printf("[%.2f] -", a[i]);
      }
  system("pause");

if(acumB ==0){
   printf("EL ARREGLO/VECTOR B NO TIENE ELEMENTOS\n\n");
   }
   else{
       printf("\t\tARREGLO/VECTOR B\n\n");
       for(i=0; i<acumB; i++);{
         printf("[%.2f] -", b[i]);
         }
         printf("\n\n");
   }
   if(acumC ==0){
      printf("EL ARREGLO/VECTOR C NO TIENE ELEMENTOS\n\n");
      }
   else{
      printf("ARREGLO/VECTOR C\n");
      for(i=0; i<acumC; i++){
        printf("[%.2f] -", c[i]);
        }
        printf("\n\n");
   }
   ////////////TERCERA PARTE///////////////
   for(i=0; i<9; i++){
       if(a[i] < 0){
         sumanegativos+=a[i];
       }
       else
          if(a[i] > 0){
          prodpositivos*=a[i];
          }
   }
   printf("LA SUMA DE LOS NEGATIVOS ES: %.2f\n", sumanegativos);
   printf("EL PRODUCTO DE LOS POSITIVOS ES: %.2f\n\n", prodpositivos);


}
