#ifndef MILIBRERIA_H_INCLUDED
#define MILIBRERIA_H_INCLUDED



#endif // MILIBRERIA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
typedef struct est
{
    int matricula;
    char apellido[20];
    int cod_carrera;
    int calificaciones[3];
} estudiantes;//OK
//........................................................................................................
int cargar_estudiante(estudiantes P[])
{
    int i=0,j;
    char n='s';
    while(n=='s')
    {
     printf("Ingrese estudiante %d ",i+1);
        printf("\n\t\tIngrese numero de matricula: ");
        fflush(stdin);
        scanf("%d",&P[i].matricula);
        printf("\n\t\tIngrese Apellido: ");
        fflush(stdin);
        gets(P[i].apellido);
        do
        {
            printf("\n\t\tIngrese codigo de carrera entre 1 y 5: ");
            fflush(stdin);
            scanf("%d",&P[i].cod_carrera);//OK
        }
        while((P[i].cod_carrera<1)||(P[i].cod_carrera>5));
        for(j=0; j<3; j++)
        {
            do
            {
                printf("\n\tIngrese la nota nro %d:  ",j+1);
                fflush(stdin);
                scanf("%d",&P[j].calificaciones[j]);//OK
            }
            while((P[j].calificaciones[j]<1)||(P[j].calificaciones[j]>100));

        }
        i++;
       printf("Desea seguir ingresando estudiantes? s=si\n");
       fflush(stdin);
       scanf("%c",&n);
    }//while de ingreso de datos
    return(i-1);
}

//.....................................................................................................................................

//.......................................................................................................................

void est_no_admitidos(estudiantes P[],int l)
{
    int i,j,prom;

    for(i=0; i<l; i++)
    {
            if((P[i].calificaciones[0]<50)||(P[i].calificaciones[1]<50)||(P[i].calificaciones[2]<50))
            {
                printf("APELLIDO\t\t\t CARRERA\t\t\t PROMEDIO\n");
                printf("%s",P[i].apellido);
                    switch(P[i].cod_carrera)
                    {
                    case 1:
                        printf("\t\t\t\tLicenciatura en Quimica");
                        break;
                    case 2:
                        printf("\t\t\t\tProfesorado Matematica");
                        break;
                    case 3:
                        printf("\t\t\t\tIngenieria Mecanica");
                        break;
                    case 4:
                        printf("\t\t\t\tIngenieria en Informacion");
                        break;
                    case 5:
                        printf("\t\t\t\tIngenieria Industrial");
                        break;
                    }
                    prom=0;
                    for(j=0;j<3;j++){
                      prom+=P[i].calificaciones[j];

                    }
                    printf("%d",prom/3);


        }

    }
    }
//......................................................................................................................
void validarApellidos(estudiantes V[],int l){
   int i,j;
   for (i=0;i<l;i++){

       V[i].apellido[0]=toupper(V[i].apellido[0]);
       for(j=1;j<strlen(V[i].apellido);j++)

            V[i].apellido[j]=tolower(V[i].apellido[j]);
   }
}
