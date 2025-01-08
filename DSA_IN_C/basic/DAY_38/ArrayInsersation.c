#include<stdio.h>

void insert(int x[],int size,int index,int val){
int i;
for(i=size;i>=index;i--){
x[i] = x[i-1];
}
x[i] = val;
}


void main(){
    int n = 5;
int x[10]= {10,20,30,40,50};
insert(x,n++,3,55);
for(int i=0;i<n;i++){
printf("%d\n",x[i]);
}
}