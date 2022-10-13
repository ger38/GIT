

#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"

int cargar_estudiante(estudiantes P[]);
void est_no_admitidos(estudiantes P[],int l);
void validarApellidos(estudiantes V[],int l);
//void promedio(estudiantes P[]);

int main()
{
     int total_est;

  printf("\n\n\tIngrese total de estudiantes: ");
  fflush(stdin);
  scanf("%d",&total_est);

  estudiantes e,p[total_est];
total_est = cargar_estudiante(p);

  validarApellidos(p,total_est);

  est_no_admitidos(p,total_est);

    return 0;
}
