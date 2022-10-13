
#include <stdio.h>
#include <stdlib.h>
#define K 4
#define N 3
int main(){

  float M[K][N];
  int K, N, i, j;
  M[0][0]=1.00, M[0][1]=2.00, M[0][2]=3.00;
  M[1][0]=4.00, M[1][1]=3.00, M[1][2]=-1.5;
  M[2][0]=1.2, M[2][1]=-2.00, M[2][2]=-4.1;
  M[3][0]=0,M[3][1]=0, M[3][2]=0;
  printf("MOSTRAR LA MATRIS: [%g]", M[K][N]);
  scanf("[%g]", M[K][N]);

}
