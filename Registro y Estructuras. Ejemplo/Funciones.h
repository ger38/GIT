#define N 2
#define cantest 2
// LAS DOS ESTRUCTURAS------------
typedef struct Materia{
   char Nombre[10];
   int Nota;
   }t_materia;


typedef struct Estudiante{
  char Nombre[20];
  int Edad;
  t_materia Mat[N];
  }t_est;
// EMPIEZAN LAS FUNCIONES------------
void Cargardatos(t_est*A){
 t_est R; int i;
 printf("\n\n\t INGRESE NOMBRE Y EDAD DEL ESTUDIANTE:");
 fflush(stdin);
 gets(R.Nombre);
 fflush(stdin);
 scanf("%d", & R.Edad);
 printf("\n\n\t INGRESE EL NOMBRE Y NOTA DE LAS %d MATERIAS:\n",N );

 for(i=0; i<N; i++){
   fflush(stdin);
   gets(R.Mat[i].Nombre);
   fflush(stdin);
   scanf("%d", & R.Mat[i].Nota);
   }
   *A=R;
 }
 //-----------MOSTRAR DATOS----------------
 void Mostrardatos(t_est A){
 int i;
 printf("\n\t\t Datos del estudiante:");
 printf("Nombre: %s\n", A.Nombre);
 printf("Edad: %d\n", A.Edad);
 printf("\n\t\t Materias con sus clificaciones");
 for(i=0; i<N; i++){
  printf("%s\n", A.Mat[i].Nombre);
  printf("%d\n", A.Mat[i].Nota);
  }
  system("pause");
 }

 //------CARGA DE CURSO---------------------
 void Cargarcurso(t_est V[]){
 int i; // t_est aux;
 for(i=0; i<cantest; i++){
     Cargardatos(&V[i]); //---Cargadatos(&aux);
                        //---V[i]=aux;---------es lo mismo que lo anterior---
 }
 }

 void Mostrarcurso(t_est V[]){
 int i;
 for(i=0; i<cantest; i++){

  Mostrardatos(V[i]);
    }
 }


