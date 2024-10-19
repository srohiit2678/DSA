#include<stdio.h>
    void hefify(int x[],int n,int i){
        int l = i*2+1;
        int r = i*2+2;
        int max = i;
        if(l<n && x[l]>x[max]){
            max = l;    
        }
        if(r<n && x[r]>x[max]){
            max = r;    
        }
        if(x[i]<x[max]){
            int temp = x[i];
            x[i] = x[max];
            x[max] = temp;
            hefify(x,n,max);
        }
    }
    void leastRoot(int x[],int n){
        for(int i= n/2-1;i>=0;i--){
            hefify( x, n, i); // create maxheap for the i root
        }
    }
void main(){
    int x[] ={1,2,3,4,5,6,7};
    int n = 7; // array size
    leastRoot(x,n); // find last root of tree
    
    for(int i=0;i<n;i++){
        printf("%d ",x[i]);
    }

}