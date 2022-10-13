
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//PROGRAMA PARA RESOLVER ECUACIONES LINEALES Y CUADRATICAS//
void main()
{
    float a, b, c, x, x1, x2, d, base, exp;  //cambia double por float
    int opcion;  //solo una opcion
    do
    {
        system("cls");
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
        printf("Ingrese 0 para salir del programa\n\n\n");
        fflush(stdin);
        scanf("%d",&opcion);//ingresa dos opciones que se guardan en una variable
        if(opcion!=0){
        d=pow(b,2)-(4*a*c);//ES EL DISCRIMINANTE//
        printf("el valor del discriminante es: %f\n\n", d);
        if(a!=0)
        {
            x=(c-b)/a;  //te cambie "opcion1" por "x"
            switch(opcion)
            {

            case 1:
                if(x<0)
                {
                    printf("LA ECUACION ES COMPATIBLE, DETERMINADA\n\n");
                    printf("EL VALOR DE X ES: %f\n", x);
                    system("pause");
                }

                if(x>0)
                {
                    printf("LA ECUACION ES COMPATIBLE , DETERMINADA\n\n");
                    printf("EL VALOR DE X ES: %f\n", x);
                    system("pause");
                }
                if(x==0){
                     printf("LA ECUACION NO TIENE SOLUCION, INDETERMINADA\n\n");
                     system("pause");

                }
            break;


            case 2:
                 x1=(-b+sqrt(d))/(2*a);
                 //printf("EL VALOR DE X1 ES: %f\n", x1);
                 //system("pause");

                 x2=(-b-sqrt(d))/(2*a);
                 //printf("EL VALOR DE X2 ES: %f\n", x2);
                 //system("pause");


                 if(x1==x2){
                     printf("\t\tESTA ECUACION TIENE UNA RAIZ DOBLE\n\n");
                     printf("\n\nEL VALOR DE LAS RAICES: %f, %f\n\n", x1, x2);
                 }
                 else
                   if(x1!=x2){
                       printf("ESTA ECUACION TIENE DOS RAICES\n\n");
                       printf("EL VALOR DE X1 Y X2 SON: %f, %f\n\n", x1, x2);
                     system("pause");
                     break;
                   }
            default:
                printf("\t\t\nSOLO SE PUEDE ELEGIR OPCION 1 U OPCION 2");






                        }}


        }
        else
            printf("muchas gracias por utilizar el programa\n\n");
        }
        while(opcion!=0);

return 0;
}
