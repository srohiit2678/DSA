#include<stdio.h>

void delete(int x[],int size,int index){
int i;
for(i=index;i<size;i++){
x[i] = x[i+1];
}
}


void main(){
    int n = 5;
    int x[10]= {10,20,30,40,50};
    delete(x,n--,4);
    for(int i=0;i<n;i++){
        printf("%d\n",x[i]);    
    }
}