#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    printf("ingrese un valor  para x: \n");
    fflush(stdin);
    scanf("%g", &x);

    printf("Ingrese un valor para y: \n");
    fflush(stdin);
    scanf("%g", &y);

       if((x==0)&&(y==0))
         printf("\t\n El punto esta en el origen");

      else{
         if((x>0)&&(y>0))
            printf("\t\n El punto esta en el primer cuadrante");

 }        else{
           if((x<0)&&(y>0))
             printf("\t\n El punto esta en el segundo cuadrante");

 }          else{
             if((x<0)&&(y < 0))
               printf("\t\n El punto esta en el tercer cuadrante");

 }           else{
               if((x>0)&&(y <0))
 }                printf("El punto esta en el cuarto cuadrante");

    return 0;
}
