#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("ingrese un valor entero para x\n");
    fflush(stdin);
    scanf("%d", &x);
    printf("Ingrese un valor entero para y\n");
    fflush(stdin);
    scanf("%d", &y),
       if(x = 0) && (y = 0)
         printf("\t\n El punto esta en el origen");
      else
         if(x > 0) && (y > 0)
            printf("El punto esta en el primer cuadrante");
         else
           if(x < 0) && (y > 0)
             printf("El punto esta en el segundo cuadrante");
           else
             if(x < 0) && (y < 0)
               printf("El punto esta en el tercer cuadrante");
            else
               if(x > 0) && (y <0)
                 printf("El punto esta en el cuarto cuadrante");

    return 0;
}
