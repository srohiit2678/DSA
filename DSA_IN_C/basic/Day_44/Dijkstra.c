#include<stdio.h>
#include<stdbool.h>
#define SIZE 5
#define MAX 2147483647
//Dijkstra.c
void show_adj(int x[SIZE][SIZE]);
void insert(int x[SIZE][SIZE],int v1,int v2,int w);

void show(int output[]);
int min_index(int output[SIZE],bool b[]);
void algo(int x[SIZE][SIZE],int s);

void main(){
int x[SIZE][SIZE]={0};
insert(x,0,1,6);
insert(x,0,3,1);
insert(x,1,2,5);
insert(x,1,4,2);
insert(x,1,3,2);
insert(x,2,4,5);
insert(x,4,3,1);
show_adj(x);
algo(x,0);



}
void algo(int x[SIZE][SIZE],int s){
int output[SIZE];
bool b[SIZE];
int i,j;

for(i=0;i<SIZE;i++){
    output[i] = MAX;
    b[i] = false;
    }
    output[s] = 0;
    
for(i=0;i<SIZE;i++){
    int m = min_index(output,b);
    b[m] = true;
  for(j=0;j<SIZE;j++){
    if(x[m][j] !=0 && b[j]==false && output[j] > output[m] + x[m][j]){
        output[j] = output[m] + x[m][j];
    }
  }
}

show(output);
}
int min_index(int output[SIZE],bool b[]){
    int min_val = MAX;
    int min_index = -1;
    for(int i =0;i<SIZE;i++){
        if(b[i]==false && min_val>output[i]){
        min_val = output[i];
        min_index = i;
        }
    } 
return min_index;
} 

void insert(int x[SIZE][SIZE] ,int v1,int v2,int w){
x[v1][v2] = w;
x[v2][v1] = w;
}
void show(int output[]){
    for(int i=0;i<SIZE;i++){
        printf("%d\t-> %d\n",i,output[i]);
    }
}
void show_adj(int x[SIZE][SIZE]){
    for(int i=0;i<SIZE;i++){
       for(int j=0;j<SIZE;j++){ 
        printf(" %d  ",x[i][j]);
       }
       printf("\n\n");
    }
}