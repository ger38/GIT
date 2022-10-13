#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Ingrese un numero natural distinto de cero\n");
    fflush(stdin);
    scanf("%d", &num);

    switch(num){
        case 1:
              printf("impar");
              break;
        case 2:
              printf("par");
              break;
        case 3:
              printf("impar");
              break;
        case 4:
              printf("par");
              break;
        case 5:
              printf("impar");
              break;
        case 6:
              printf("par");
              break;
        case 7:
              printf("impar");
              break;
        case 8:
              printf("par");
              break;
        case 9:
              printf("impar");
              break;
        default:
              printf("Numero invalido");
    }



    return 0;
}
