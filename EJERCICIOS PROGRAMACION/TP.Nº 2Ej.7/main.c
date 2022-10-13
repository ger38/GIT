#include <stdio.h>
#include <stdlib.h>
//Ejercio N°6 de la guia 2022
int main()
{
    float x, y;
    printf("Ingrese un valor para x y otro para y \t\n");
    fflush(stdin);
    scanf("%g%g", &x, &y);
       if((x>0)&&(y>0))
           printf("\t El punto esta en el primer cuadrante:\n");
       else
          if((x<0)&(y>0))
           printf("\t El punto esta en el segundo cuadrante: \n");
       else
          if((x<0)&&(y<0))
           printf("\t El punto se encuentra en el tercer cuadrante: \n");
       else
          if((x>0)&&(y<0))
           printf("\t El punto se encuentra en el cuarto cuadrante:\n");
       else
          if((x==0)&&(y==0))
           printf("\t El punto esta en el origen:\n");
       else
          if((x==1)&&(y==0))
           printf("\t El punto esta sobre el eje x\n");








    return 0;
}
