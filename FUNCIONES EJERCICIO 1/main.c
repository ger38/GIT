
//--GUIA--//--- FUNCIONES EJ.1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define A 5
void dibujo();

int main(){

    int B;
   char c;
  dibujo();
  dibujo();
  dibujo();
  dibujocaracter();


}
//----------------------------------
void dibujo(){
 int i;
 for (i=0; i<A; i++)
 printf("&");
 printf("\n");
}
//---------------------------------
void dibujocaracter(char *c){
   int i;
   for(i=0; i<A; i++)
   printf("c");
   printf("\n");
}
//-------------------------------------
void date(int dd, int mm, int aa){
    int B;
    B=aa % 100;
    printf("%d / %d / %d\n", dd, mm, aa, B);
}
//-------------------------------------------

