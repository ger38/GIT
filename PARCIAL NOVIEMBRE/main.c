#include <stdio.h>
#include <stdlib.h>


typedef struct reg{
    int categorias[5];
    int legajo[];
    char ApellidoyNombreS[24];
    int NumerodeSeccion[];
} t_Personal;
void cargarPersonal(tPersonal V [], int L);
void mostrarListado(tPersonal V [], int L);
void cargarCategorias(char cat[][N]);

int main()
{
    int cant;
    char Categorias[0][administrativo], [1][tenico], [2][operario], [3][jefe], [4][gerente];
    printf("Ingrese la cantidad de Personal\n");
    scanf("%d", & cant);
    tPersona Personal[cant];
    tPersonal V[];
    leerVector (V);
    mostrarVectro (V),

    return 0;
}

//-----COMIENZO DE FUNCIONES------------
void cargarPersonal(tPersonal V[]){
    int i;
    tPersonal A,
    printf("\n\t INGRESE DATOS DEL PERSONAL:\n\t Apellido y Nombre, Legajo, Categoria y Seccion\n");
    for(i=0; i<cant; i++){
        gets(A.ApellidoyNombre);
        fflush(stdin);

    }
}
