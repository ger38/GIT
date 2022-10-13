//--GUIA--//--- FUNCIONES EJ.1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define A 5
void dibujo();

int main(){
   char c;
  dibujo();
  dibujo();
  dibujo();

}
//----------------------------------
void dibujo(){ 
 int i; 
 for (i=0; i<A; i++) 
 printf("&"); 
 printf("\n"); 
} 
//---------------------------------
void dibujo(char *c){
   int i;
   for(i=0; i<A; i++)
   printf("c");
   printf("\n");
}
//-------------------------------------

