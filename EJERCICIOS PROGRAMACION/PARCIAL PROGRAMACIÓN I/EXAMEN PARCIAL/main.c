#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N=7
char tipofigura[] ={'T', 'C','R'} ;
    int i;
    float base[] = {14.00, 12.00, 15.00};
    float altura[] = {24.00, 12.00, 18.23};
char  C;
char tipofigura2[]= {'T'};
int main()
{
    for(i=0; i<3; i++){
        printf("\t NUMERO DE FIGURA: %d\n", i+1);
        printf("\t TIPO DE FIGURA: %c\n", tipofigura[i]);
        printf("\t LA SUPERFICIE ES: %.2f\n", base[i] * altura[i]);

    system("pause");

    switch(tipofigura[i]){
        case 'C':
                 printf("\t EL PERIMETRO DEL CUADRADO ES: %.2f\n\n", base[i]*4);
                  break;
        case 'T':
                 printf("\t EL PERIMETRO DEL TRIANGULO: %.2f\n\n", base[i]+altura[i]+(sqrt( pow (base[i],2) + (pow (altura[i],2)))));
                  break;
        case 'R':
                  printf("\t EL PERIMETRO DEL RECTANGULO: %.2f\n\n", (base[i]+altura[i])*2);
                  break;

        default: printf("\t FIN DEL PERIMETRO\n");
    }
    system("pause");
    }

    tipofigura2[i]=0;
    while(tipofigura2[i]!='C'){
               for(i=0; i<4; i++){
                  if(tipofigura[i]!='C')
                  tipofigura2[i]=tipofigura[i];
               printf("%s", tipofigura2[i]);
               }
    }

}




