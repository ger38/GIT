#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
 printf("Ingrese un numero entero\n");
 fflush(stdin);
 scanf("%d",&a);
 printf("Ingrese otro número entero\n");
 fflush(stdin);
 scanf("%d",&b);
 printf("\n");
    if (a>b)
      printf("El mayor es: %d",a);
    else
        if (a<b)
      printf("El menor es: %d",a);

 printf("\n");

    return 0;
}
