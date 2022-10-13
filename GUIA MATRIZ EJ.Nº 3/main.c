

#include<stdint.h>
#include<stdio.h>


void main(){
    //--A---
int x[10][4], y[10][4];
int i,j,a;

for (i = 0; i < 3; i++){
for (j = 0; j < 2; j++)
scanf(“%d”,&x[i][j]);
}

for (i = 0; i < 3; i++){
for (j = 0;j < 2; j++)
y[i][j] = x[i][j];

for (i = 0; i< 3; i++)
for (j = 0;j < 2; j++)
printf(“%d”,y[i][j]);
}
}

    //---B--
/*int a[10][20], b[10][20];
int i,j;
for (i = 0;i < 3; i++)
for (j = 0; j < 3; j++)
scanf(“%d”.&a[i][j]);
for (i = 0; i < 3; i++)
for (j = 0; j < 3; j++)
b[i][j] = a[j][i];
for (I = 0; I < 3; i++)
for (j = 0; j < 3; j++)
printf(“%d”,b[i][j]);
............................. ...............................




}
