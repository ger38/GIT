#include <stdio.h>
#include <stdlib.h>


// define n 3

//CATEGORIA LEGAJOS

typedef struct registro{
    int categoria;
    int legajo;
    char apellidoynombres[50];
    int numerodeseccion;

} info;

void cargacategorias(char categorias[6][40],int n);
void cargadatos(info personal[],char categorias[6][40], int n);
void muestralistado(info personal[],char categorias[6][40], int n);
void cantidadempleados(info personal[],char categorias[6][40], int n);



void  main(){
    int n;
    printf("ingrese la cantidad de personas: ");
    scanf("%d",&n);
    info personal[n+1];
    char categorias[6][40];
    cargacategorias(categorias,n);
    cargadatos(personal, categorias,n);
    muestralistado(personal,categorias,n);
    cantidadempleados(personal,categorias,n);


}



void cargacategorias(char categorias[6][40],int n){
    int i;
    printf("ingrese las categorias: \n\n");
    for(i=0;i<5;i++){
        printf("categoria %d: ",i+1);
        fflush(stdin);
        gets(categorias[i]);
    }

}

void cargadatos(info personal[],char categorias[6][40], int n){
    printf("las categorias ingresadas son las siguientes..: \n\n");
    int x,i;
    for(i=0;i<n;i++){

        for(x=0;x<5;x++){
            printf(" - ingrese %d para la categoria %s: \n",x+1,categorias[x]);
        }

    do{
        fflush(stdin);
        scanf("%d",&personal[i].categoria);
    }
    while(personal[i].categoria<=5 || personal[i].categoria>=1);
    //fflush(stdin);
    //scanf("%d",&personal[i].categoria);
    int i;
    for(i=0; i<n; i++){
    printf("ingrese el numero de legajo: ");
    fflush(stdin);
    scanf("%d",&personal[i].legajo);
    printf("ingrese apellido y nombre: ");
    fflush(stdin);
    gets(personal[i].apellidoynombres);
    }
    do{
        printf("ingrese el numero de seccion: ");
        fflush(stdin);
        scanf("%d",&personal[i].numerodeseccion);
    }
    while(personal[i].numerodeseccion<1 || personal[i].numerodeseccion>50);

    printf("valor ingresado para categoria: %d\n",personal[i].categoria);

    }

}



void muestralistado(info personal[],char categorias[6][40], int n){
        int i;
        for(i=0;i<n;i++){
            switch(personal[i].categoria){
                case 3: {

                            printf("CATEGORIA NUMERO 3: %s\n",categorias[2]);
                            printf("apellido y nombre: %s\n",personal[i].apellidoynombres);
                            printf("numero de legajo: %d\n",personal[i].legajo);
                            printf("numero de seccion: %d\n",personal[i].numerodeseccion);

                            break;


                }

                case 4: {

                        printf("CATEGORIA NUMERO 4: %s\n",categorias[3]);
                        printf("apellido y nombre: %s\n",personal[i].apellidoynombres);
                        printf("numero de legajo: %d\n",personal[i].legajo);
                        printf("numero de seccion: %d\n",personal[i].numerodeseccion);

                        break;

                }

                case 5: {
                        printf("CATEGORIA NUMERO 5: %s\n",categorias[4]);
                        printf("apellido y nombre: %s\n",personal[i].apellidoynombres);
                        printf("numero de legajo: %d\n",personal[i].legajo);
                        printf("numero de seccion: %d\n",personal[i].numerodeseccion);

                        break;
                }




            }


        }




}

void cantidadempleados(info personal[],char categorias[6][40], int n){
int i,j,contador,totalcategorias[6];

for(i=0;i<5;i++){
    contador=0;
    for(j=0;j<n;j++){
        if(personal[j].categoria== i+1){
            contador++;
        }
    }
    totalcategorias[i]=contador;
}

for(i=0;i<5;i++){
    printf("- categoria %s: %d empleados\n",categorias[i],totalcategorias[i]);

}


}





//HOSPITAL CON PACIENTES

/*
typedef struct consultass{
   char diag[100];
   float importe;
} consulta;

typedef struct pacientesss{
    int hc;
    char nombre[50];
    char cel[15];
    consulta vector[5];
} info;

void cargapacientes(info paciente[],int n);
void cargaconsultaimporte(info paciente[],int n);
void covid(info paciente[],int n);
void importetotal(info paciente[],int n);

void main(){
    int decision,n;
    printf("por favor.. ingrese la cantidad de pacientes: ");
    fflush(stdin);
    scanf("%d",&n);
    info paciente[n+1];
    printf("hola usario.. ingrese sus datos: \n\n");
    cargapacientes(paciente,n);
    do{
        printf("quiere cargar una nueva consulta?\n");
        printf("1 para si\n");
        printf("0 para no\n");
        fflush(stdin);
        scanf("%d",&decision);
        switch(decision){
            case 1: {

                    cargaconsultaimporte(paciente,n);
                    break;

            }

        }

    }

    while(decision!=0);
    covid(paciente,n);
    importetotal(paciente,n);
}


void cargapacientes(info paciente[],int n){
    int i,j;
        for(i=0;i<n;i++){
            printf("paciente numero %d: \n",i);
            printf("ingrese su historia clinica: ");
            fflush(stdin);
            scanf("%d",&paciente[i].hc);
            printf("ingrese su nombre: ");
            fflush(stdin);
            gets(paciente[i].nombre);
            printf("ingrese su numero de celular: ");
            fflush(stdin);
            gets(paciente[i].cel);
            printf("\n\n\n");

            for(j=0;j<5;j++){
                    paciente[i].vector[j].importe=0;
            }
        }

}


void cargaconsultaimporte(info paciente[],int n){
    int ingresahc, i,j=0;
    printf("Ingrese una historia clinica: ");
    fflush(stdin);
    scanf("%d",&ingresahc);
    for(i=0;i<n;i++){

        printf("valor de i %d\n",i);
        if(ingresahc==paciente[i].hc){
            //system("pause");
                for(j=0;j<5;j++){
                    //printf("valor de importe: %d\n",paciente[i].vector[j].importe);
                    if (paciente[i].vector[j].importe==0){
                        //system("pause");
                        break;
                    }
                }
            printf("ingrese su consulta: ");
            fflush(stdin);
            gets(paciente[i].vector[j].diag);
            printf("ingrese el importe a pagar: ");
            fflush(stdin);
            scanf("%g",&paciente[i].vector[i].importe);
            break;
        }


    }

    }


void covid(info paciente[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<5;j++){
            if((strcmp(paciente[i].vector[j].diag,"covid")==0)||(strcmp(paciente[i].vector[j].diag,"COVID")==0)){
                printf("Nombre del paciente: %s\n",paciente[i].nombre);
                printf("Historia Clinica: %d\n",paciente[i].hc);
                printf("Numero Celular: %s\n",paciente[i].cel);
                printf("\n\n\n");

            }

        }


    }




}


void importetotal(info paciente[],int n){
int i,j,suma=0;
    for(i=0;i<n;i++){
        for(j=0;j<5;j++){
                suma=suma+paciente[i].vector[j].importe;
        }
    }
printf("el monto total recaudado es de: %d\n",suma);
}
*/
