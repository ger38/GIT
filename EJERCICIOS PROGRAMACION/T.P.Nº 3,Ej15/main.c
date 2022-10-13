#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i=0,contb=0,contm=0,contp=0,contr=0;
    char a;
    printf("\t\tDiga la cantidad de letras que ingresara.\n\n");
    fflush(stdin);
    scanf("%d", &x);

    printf("\n\n\Ingrese las letras que declaro\n\n");
    while(i<x){
        fflush(stdin);
        scanf("%c", &a);
        switch(a)
        {
            case'B':
                   contb+=1;
                   i++;
                   break;
            case'M':
                   contm+=1;
                   i++;
                   break;
            case'P':
                  contp+=1;
                  i++;
                  break;
            case'R':
                   contr+=1;
                   i++;
                   break;
           default:
             i++;

        }
        }
    printf("\n\nCantidad de las siguientes letras:\n");
    printf("B=%d\n\n", contb);
    printf("M=%d\n\n", contm);
    printf("P=%d\n\n", contp);
    printf("R=%d\n\n", contr);
    return 0;
}
