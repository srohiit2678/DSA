#include<stdio.h>
void merge(int left[],int right[],int x[],int l,int r);
void divide(int x[],int n){
    if(n<=1)return;
    int l = n/2;
    int r = n-l;
    int left[l];
    int right[r];
    int i;
    for(i=0;i<l;i++){
        left[i]=x[i];
    }
    for(i=0;i<r;i++){
        right[i]=x[i+l];
    }
// divide until 1
    divide(left,l);
    divide(right,r);
    merge(left,right,x,l,r);
}

void merge(int left[],int right[],int x[],int l,int r){
    int i,j,k;
    for(i=0,j=0,k=0;i<l && j<r;){
        if(left[i]<right[j]){
            x[k++] = left[i++];
        }
        
        if(right[j]<left[i]){
            x[k++] = right[j++];
        }
    }
    while(i<l)x[k++] = left[i++];
    while(j<r)x[k++] = right[j++];
}

void main(){
    int x[] = {56,29,35,42,15,41,75,21};
    int n=8;
    divide(x,n);
    for(int i=0;i<n;i++){
        printf("%d ",x[i]);
    }
}