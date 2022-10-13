#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n°libreta, nota1, nota2, nota3;
    float promedio;
    char nombre[23], apellido[23];
    printf("Ingrese su nombre y apellido\n");
    fflush(stdin);
    scanf("%s%s", &nombre, &apellido);
    printf("Ingrese el numero de libreta\n");
    fflush(stdin);
    scanf("%d", &n°libreta);
    printf("Ingrese las notas de los parciales\n");
    fflush(stdin);
    scanf("%d,%d,%d", &nota1, &nota2, &nota3,);
    int p1, p2, p3;
    p1=nota1;
    p2=nota2;
    p3=nota3;
    promedio=(p1+p2+p3)/3;
         if(promedio<6)
            printf("%s, nombre y %s, apellido, %d, numero de libreta, %s, desaprobado\n", nombre,apellido,n°libreta );
        else
            if(promedio>=&&promedio<9)
            printf("%s, nombre y %s, apellido, %d, numero de libreta, %s, aprobado\n", nombre,apellido,n°libreta);
           else
            printf("%s, nombre y %s, apellido, %d, numero de libreta, sobresaliente\n", nombre,apellido,n°libreta);



}
