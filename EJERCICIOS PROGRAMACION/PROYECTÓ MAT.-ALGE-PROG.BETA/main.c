
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//PROGRAMA PARA RESOLVER ECUACIONES LINEALES Y CUADRATICAS//
void main()
{
    float a, b, c, x, x1, x2, d, base, exp;
    int opcion;  //solo una opcion
    do
    {
        system("cls");
        printf("\t\t\tESTE ES UN PROGRAMA PARA RESOLVER ECUACIONES LINEALES Y CUADRATICAS\n\n\n");
        printf("\t\t\tSI A ES IGUAL A CERO, LA ECUACION NO TIENE SOLUCION EN EL CONJUNTO DE LOS N° REALES\n\n\n");

        printf("INGRESE UN VALOR PARA A\n");
        fflush(stdin);
        scanf("%f", & a);
        printf("INGRESE UN VALOR PARA B\n");
        fflush(stdin);
        scanf("%f", & b);
        printf("INGRESE UN VALOR PARA C\n");
        fflush(stdin);
        scanf("%f", & c);
        printf("Elija un tipo de ecuacion, opcion 1 para lineal u opcion 2 para cuadratica\n");
        fflush(stdin);
        scanf("%d",&opcion);//ingresa dos opciones que se guardan en una variable
        if(opcion!=0){
         d=pow(b,2)-(4*a*c);//ES EL DISCRIMINANTE//
              if(d<0){
                printf(" El discriminante d es menor a 0: %g\n", d);
                printf("La ecuacion no tiene solucion en el conjunto de los numeros Reales si fuera Cuadratica\n");
              }

             else
               printf("\t\t\tel valor del discriminante es: %g\n\n", d);
        //if(a!=0)
        //{
            x=(c-b)/a;  //te cambie "opcion1" por "x"

            switch(opcion)
            {

            case 1:
                if(x!=0)
                {
                    printf("LA ECUACION ES COMPATIBLE, DETERMINADA\n\n");
                    printf("EL VALOR DE X ES: %g\n", x);
                    }

                      if(x==0){
                         printf("LA ECUACION NO TIENE SOLUCION, INDETERMINADA: %g\n\n", x);
                      }

                      if(a*x==0&&c-b==0){
                              printf("LA ECUACION ES COMPATIBLE INDETERMINADA\n\n");
                     }


            system("pause");
            break;


            case 2:
                 x1=(-b+sqrt(d))/(2*a);

                 x2=(-b-sqrt(d))/(2*a);

                 if(x1==x2){
                     printf("\t\tESTA ECUACION TIENE UNA RAIZ DOBLE\n\n");
                     printf("\n\nEL VALOR DE LAS RAICES: %g, %g\n\n", x1, x2);
                 }
                 else
                   if(x1!=x2){
                       printf("ESTA ECUACION TIENE DOS RAICES DISTINTAS\n\n");
                       printf("EL VALOR DE X1 Y X2 SON: %g, %g\n\n", x1, x2);
                     system("pause");
                     break;
                   }
            default:
                printf("\t\t\nSOLO SE PUEDE ELEGIR OPCION 1 U OPCION 2");






                        }//}


        }
            else

                     printf("muchas gracias por utilizar el programa\n\n");


        }
        while(opcion!=0);
                if(a==0){
                    printf("LA  ECUACION NO TIENE SOLUCION: %f\n\n\n", x);
        }


return 0;
}
