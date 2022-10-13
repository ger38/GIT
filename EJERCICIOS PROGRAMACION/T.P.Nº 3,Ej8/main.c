#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, j;
    float a,b=0,x,y;
    printf("Igrese un valor de A\n\n");
    fflush(stdin);
    scanf("%f", &x);
    printf("\t\tIngrese un valor de B mayor que A\n\n");
    fflush(stdin);
    scanf("%f", &y);
    printf("\t\t\n\nIngrese valores decimales distintos de 0\n\n");
     do
     {
         fflush(stdin);
         scanf("%f",&a);
         if(a>x&&a<y){
          i++;
          b+=a;
          }
     }while(a!=0);
     printf("\n\nPara estos numeros, el promedio entre el rango %f hasta %f es:\n\n", x,y);
     printf("[%f]",b/i);


    return 0;
}
