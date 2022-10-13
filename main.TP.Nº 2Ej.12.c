#include <stdio.h>
#include <stdlib.h>
#define particular
#define profesional
#define comercial
int main()
{
    char categoria;
    int pulsos;
    float importe;
    printf("\t\t Ingrese categoria de usuario y cantidad de pulsos consumidos: \n");
    fflush(stdin);
    scanf("%s%d", && categoria,pulsos);
    switch(categoria){
        case particular
                        if ((pulsos>0) && (pulsos<=200)) = ((pulsos)*(5/100));{
                          importe=(pulsos+30);
                          printf("\n importe a pagar: %g", importe);
                        }

                           if((pulsos>200)&&(pulsos<=400)) = ((pulsos)*(7/100));{
                             importe=(pulsos+30);
                             printf("\n importe a pagar: %g", importe);
                           }
                           else
                             if((pulsos>400)&&(pulsos<=1000)) = ((pulsos)*(1/10));{
                               importe=(pulsos+30);
                               printf("\n importe a pagar: %g", importe);
                             }

                            else(pulso>1000)'='((pulsos)*(12/100)){
                             importe=(pulsos+30);
                             printf("\n Importe a pagar: %g", importe);
                            }
                             break;

       case profesional
                       if((pulsos>0)&&(pulsos<=250)) = ((pulsos)*(7/100));{
                          importe=(pulsos+50);
                          printf("\n importe a pagar: %g", importe);
                       }

                         if((pulsos>251)&&(pulsos<=500)) = ((pulsos)*(11/100));{
                           importe=(pulsos+50);
                           printf("\n importe a pagar: %g", importe);
                         }
                         else
                           if((pulsos>=501)&&(pulsos<=1000)) = ((pulsos)*(13/100));{
                            importe=(pulsos+50);
                              printf("\n importe a pagar: %g", importe);
                           }
                           else(pulsos>1000)=((pulsos)*(15/100)){
                             printf("\n importe a pagar: %g" , importe);
                           }
                             break;

      case comercial
                      if((pulsos>0)&&(pulsos<=300)) = ((pulsos)*(9/100));{
                         importe=(pulsos+70);
                         printf("\n importe a pagar: %g", importe);
                      }

                         if((pulsos>301)&&(pulsos<=600)) = ((pulsos)*(12/100));{
                            importe=(pulsos+70);
                            printf("\n importe a pagar: %g", importe);
                         }
                        else
                           if((pulsos>601)&&(pulsos<=1000)) = ((pulsos)*(15/100)){
                           importe=(pulsos+70);
                           printf("\n importe a pagar: %g", importe);
                           }
                           else(pulsos>1000)=((pulsos)*(17/100)){
                           iporte=(pulsos+70);
                           printf("\nimporte a pagar: %g", importe);
                         break;
                        }
                   }
    return 0;
}
