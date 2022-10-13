#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i,j,n;
 int vect[9];
 printf("\nIngrese la cantidad de elementos\n");
 scanf("%d",&n);
 for( i=0;i<=n;i++){
 scanf("%d",&vect[i]);
 }
 printf("\nIngrese un valor entero\n\n");
 scanf("%d",&j);
 for( i=0;i<=n;i++){
 vect[i]=vect[i]*j;
 printf("\nEscribe el valor modifiado\n");
 }
 for( i=0;i<=n;i++){
 printf("%d",vect[i]);
 }


}
