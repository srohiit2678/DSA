#include<stdio.h>

void heapify(int x[],int n,int i){
    int l = i*2+1;
    int r = i*2+2;
    int max = i;
    if(r<n){
        if(x[l]>x[r]){
            max = l;
        }
        else{
            max =r;
        }
    }
    else if(l<n){
        max = l;
    }
    if(x[i]<x[max]){
        int temp = x[i];
        x[i] = x[max];
        x[max] = temp;
        heapify(x,n,max);
    }
}

void leastRoot(int x[],int n){
    for(int i = n/2-1;i>=0;i--){
        heapify(x,n,i);
    }
}
   void deleteRoot(int x[],int n){
    for(int i = n-1;i>=1;i--){
    int temp = x[0];
        x[0] = x[i];
        x[i] = temp;
    leastRoot(x,i);
   }
   }
void main(){
    int x[] = {1,2,3,4,5,6,7};
    int n = 7; 
    leastRoot(x,n);
    deleteRoot(x,n);
    for(int i=0;i<n;i++){
        printf("%d ",x[i]);
    }
}