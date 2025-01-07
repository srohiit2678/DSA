#include<stdio.h>
#define SIZE 5
#define MAX 2147483647

void showMatrix(int matrix[SIZE][SIZE]);
void creatAdjcancy(int matrix[SIZE][SIZE]);
void inserPathW(int matrix[SIZE][SIZE],int v1,int v2,int w);
void main(){
 // represent the graph of vertex = SIZE
int matrix[SIZE][SIZE] = {0};
creatAdjcancy(matrix);
showMatrix(matrix);
}
// to create path
void creatAdjcancy(int matrix[SIZE][SIZE]){
    // all connected edegs with weight
    inserPathW(matrix,0,1,6);
    inserPathW(matrix,0,3,1);
    inserPathW(matrix,1,2,5);
    inserPathW(matrix,1,3,2);
    inserPathW(matrix,1,4,2);
    inserPathW(matrix,2,4,5);
    inserPathW(matrix,3,4,1);
}
// initialize with Path or weight 
void inserPathW(int matrix[SIZE][SIZE],int v1,int v2,int w){
  matrix[v1][v2] = w;
  matrix[v2][v1] = w;
}
// show Matrix 
void showMatrix(int matrix[SIZE][SIZE]){

for(int i=0;i<SIZE;i++){
    for(int j=0;j<SIZE;j++){
        printf("%d ",matrix[i][j]);
    }
    printf("\n");
}
}
