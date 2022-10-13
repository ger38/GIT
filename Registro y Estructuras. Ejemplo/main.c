#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include "Funciones.h"

void Cargardatos(t_est *A);
void Muestradatos(t_est A);

void Cargarcurso(t_est V[]);
void Mostrarcurso(t_est V[]);

int main()
{
    t_est cursoP[cantest];
    //t_est cursoE[cantest];

    Cargarcurso(cursoP);
    //t_est cursoE[cursoE];

    Mostrarcurso(cursoP);
    //Mostrarcurso(cursoE);

    return 0;
}
