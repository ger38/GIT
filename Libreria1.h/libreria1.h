

int menu(){
 int resp=1;
 do{
  system("cls");
  printf("\n\t\tSeleccione una opcion\n");
  printf("\n\t\t1 para intercambiar valores por valor\n");
  printf("\n\t\t2 para intercambiar valores por referencia\n");
  printf("\n\t\t3 para cargar vector\n");
  printf("\n\t\t4 para mostrar vector\n");
  printf("\n\t\t0 para finalizar\n");
  scanf("%d",&resp);}
while ((resp<0)||(resp>4));
return(resp);
}

//---------------------------------------------------------------------------
void intercambioxValor(int x, int y){
   int z;
     printf("\n\t\t n1 y n2 del programa principal son: %d y %d",x,y);
     z=x;
     x=y;
     y=z;
     printf("\n\t\tLos valores intercambiados son: %d y %d\n\n",x,y);
     //system("pause");
}
//-----------------------------------------------------------------------------
void intercambioxReferencia(int *x, int *y){
   int z;
     printf("\n\t\t n1 y n2 del programa principal son: %d y %d",*x,*y);
     z=*x;
     *x=*y;
       *y=z;
     printf("\n\t\tLos valores intercambiados son: %d y %d\n\n",*x,*y);
     system("pause");
}

//-----------------------------------------------------------------------------
void carga(char vAlum[]){
   int i, l;
   printf("\t Ingrese los nombres de los alumnos\n");
   for(i=0; i<l; i++)
   fflush(stdin);
   scanf("[%s]", &vAlum[i]);
   system("pause");
   }
   //-------------------------------------------------------------------
int carga1(int v[20]){
    int i,l;
    printf("Ingrese cantidad de elementos del vector\n");
    scanf("%d",&l);
    for (i=0;i<l;i++){
        printf("\nElemento Numero...%d\n",i+1);
        scanf("%d",&v[i]);
        }
          return (l);
}
//-----------------------------------------------------------------------------
void muestra(int v[], char v[],int k)
{
        int i;
        printf("\nMostramos el vector....\n");
        for (i=0;i<k;i++){
            printf("[%s]", v[i]);}
            for(i=0; i<k; i++){
              printf("[%d] ",v[i]);
        }
     printf("\n\n");
     system("pause");
}

//-----------------------------------------------------------------------------


