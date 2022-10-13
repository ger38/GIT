#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Ingrese tres valores distintos\n");
    fflush(stdin);
    scanf("%d %d %d", &a, &b, &c);
      if(a<b)
        if(a<c)
           printf("El menor es: %d",a);
        else
           printf("El menor es: %d",c);
     else
       if(b<c)
          printf("El menor es: %d",b);
      else
          printf("El menor es: %d",c);
    return 0;
}
