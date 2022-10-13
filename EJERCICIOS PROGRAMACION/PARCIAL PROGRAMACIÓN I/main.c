#include <stdio.h>
#include <stdlib.h>
#include N 7
 char articulo[] = {'pantalon','camisa','remera','pantalon','gorra','camisa'};
  int i;
    float importe[] = {5400,3200,435,780, 659.80, 320};
    int codigo[] = {23,17,5,8, 25,4};



int main()
{
    printf("\t INGRESE UN TIPO DE ARTICULO\n");

   if ('pantalon')
   codigo=codigo[0];
   importe=0;
    for(i=1; i<6; i++){
        if(articulo[i]=='pantalon')
        codigo=articulo[i];
        importe=i;
        printf("\t LOS CODIGOS %d, Y LOS IMPORTES %d SON:\n", codigo, importe);
      }
    system("pause");
   if('camisa')
   codigo=codigo[0];
   importe=0;
   for(i=1; i<6; i++){
       if(articulo[i]=='camisa')
       codigo=articulo[i];;
       importe=i;
       printf("\t LOS CODIGOS %d, Y LOS IMPORTES %d SON:\n", codigo, importe);
      }
   system("pause");
   if('remera')
   codigo=codigo[0];
   importe=0;
   for(i=1; i<6; i++){
       if(articulo[i]=='remera')
       codigo=articulo[i];
       importe=i;
       printf("\t LOS CODIGOS %d, Y LOS IMPORTES %d SON:\n", codigo, importe);
      }
   system("pause");


   }
    return 0;
}
