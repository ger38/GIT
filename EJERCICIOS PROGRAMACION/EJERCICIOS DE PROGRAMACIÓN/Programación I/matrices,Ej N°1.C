#include<stdint.h>
#include<stdio.h>
#define TAM 4 
int main(){
float M[TAM][TAM],T[TAM][TAM]; 
int F,C,i,j; 
printf("\n\nIngrese la cantidad de filas"); 
scanf("%d",&F); 
printf ("\n\nIngrese la cantidad de columnas"); 
scanf("%d",&C); 
for (i = 0;i < F;i++) { 
 for (j = 0;j < C;j++) { 
 printf("\n\nIngrese el valor de la componente [%d][%d] ",i,j); 
 scanf("%f",&M[i][j]); 
 } 
}  
for (i = 0;i < F;i++) { 
 for (j = 0;j < C;j++) { 
 T[i][j] = M[i][j]+i+j; 
 } 
} 
for (i = 0;i < F;i++) { 
 for (j = 0;j < C;j++) { 
 printf("%g",T[i][j]); 
 } 
 printf("\n"); 
} 
return 0;
}
