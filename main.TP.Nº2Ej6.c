#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n°libreta,nota1,nota2,nota3;
    float promedio;
    char nombre[20], apellido[20];
    printf("Ingrese su nombre y apellido\n");
    fflush(stdin);
    scanf("%s%s",&nombre,&apellido);
    printf("Ingrese el numero de libreta\n");
    fflush(stdin);
    scanf("%d", &n°libreta);
    printf("Ingrese las notas de los parciales\n");
    fflush(stdin);
    scanf("%d%d%d",&nota1,&nota2,&nota3,);
    int p1, p2, p3;
    p1=nota1;
    p2=nota2;
    p3=nota3;
    promedio=(p1+p2+p3)/3;
         if(promedio<6)
            printf("%s%s%d,\n", Desaprobado:,nombre,apellido,n°libreta );
        else
            if(promedio>=&&promedio<9)
            printf("%s%s%d,\n", Aprobado,nombre,apellido,n°libreta);
           else
            printf("%s%s%d\n", Sobresaliente,nombre,apellido,n°libreta);



}
