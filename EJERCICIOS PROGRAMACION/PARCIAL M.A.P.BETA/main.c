
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//PROGRAMA PARA RESOLVER ECUACIONES LINEALES Y CUADRATICAS//
int main()
{
    float a, b, c, x, x1, x2;
    int opcion=0;  //solo una opcion
    do
    {
        system("cls");
        printf("\t\t-------------------------------------------------------------------------------\n");
        printf("\t\t\tESTE ES UN PROGRAMA PARA RESOLVER ECUACIONES LINEALES Y CUADRATICAS\n\n\n");
        printf("\t\t\tElija el tipo de ecuacion\n");
        printf("\t\t-----------------------------------\n\n");
        printf(" Opcion 1-Ecuacion lineal\n");
        printf(" Opcion 2-Ecuaciones cuadraticas\n");
        printf(" Opcion 3-Salir\n");
        fflush(stdin);
        scanf("%d", & opcion);

       switch(opcion){
           case 1:
                 printf("\tINGRESE UN VALOR PARA A\n");                                  //  d=pow(b,2)-(4*a*c);//ES EL DISCRIMINANTE//
                 fflush(stdin);
                 scanf("\t%f", & a);
                 printf("\tINGRESE UN VALOR PARA B\n");
                 fflush(stdin);
                 scanf("\t%f", & b);
                 printf("\tINGRESE UN VALOR PARA C\n");
                 fflush(stdin);
                 scanf("\t%f", & c);


                if(a==0){  //si a es igual a 0, ax+b=c Es compatible indeterminada o incompatible segun si B es igual a C.
                    if(b==c) {  //queda la ecuacion ax + b = b, b=b
                        printf("\t La ecuacion es compatible indeterminada\n");
                    system("pause");
                    }
                    else{   //queda la ecuacion 0x + b = c  B ES IGUAL C
                        printf("\t La ecuacion es incompatible\n");
                    system("pause");
                    }
                }
                else{

                    printf("\t La ecuacion es compatible\n");
                    printf("\t%.2fx + %.2f = %.2f\n", a, b, c);
                    printf("\t%.2fx = %.2f - %.2f\n", a, c, b);
                    printf("\t%.2fx = %.2f\n", a, c - b);
                    printf("\tx = %.2f/%.2f\n", c - b, a);
                   printf("\tx = %.2f\n", (c - b)/a);
                   system ("pause");
                  }
                break;


        case 2:
               printf("\tINGRESE UN VALOR PARA A\n");
               fflush(stdin);
               scanf("%f", &a);
               while(a==0){
                   printf("\t a no puede ser igual a 0 en una ecuacion cuadratica\n");
                   printf("\t Ingrese nuevamente el valor de a:\n");
                   fflush(stdin);
                   scanf("%f", & a);
               }
               printf("\tINGRESE UN VALOR PARA B\n");
               fflush(stdin);
               scanf("%f", & b);
               printf("\tINGRESE UN VALOR PARA C\n");
               fflush(stdin);
               scanf("%f", &  c);

               if(pow(b,2.0) - 4*a*c == 0){
                   printf("\t Las dos raices son iguales\n");
                   printf(" x1 = x2 = %.2f\n", -b/2*a);

               }

               else
                   if(pow(b,2.0) - 4*a*c < 0){
                       printf("\t NO TIENE SOLUCION EN EL CONJUNTO DE LOS N° REALES:\n");

                   }
              else{
                  printf("\t Las dos raices son distintas:\n");
                  printf(" x1 = %.2f\n", (-b + sqrt(pow(b, 2.0) - 4*a*c))/2*a);
                  printf(" x2 = %.2f\n", (-b - sqrt(pow(b, 2.0) - 4*a*c))/2*a);
              }
              system ("pause");
              break;

        case 3:
               printf("muchas gracias por utilizar el programa\n\n");
               break;
        default:
               printf("OPCION INCORRECTA, LAS OPCIONES SON 1, 2, 3\n\n");
               break;

        }
        }
      while(opcion !=3);





  }

