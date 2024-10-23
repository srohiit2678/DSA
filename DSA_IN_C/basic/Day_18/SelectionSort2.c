#include<stdio.h>
void display(int x[],int n);
void sSort(int x[],int n){
    int i,j,max;
    for(i=n-1;i>0;i--){
      max = i;
      for(j=i-1;j>=0;j--){
        if(x[max]<x[j]){
            max = j;
        }
      }
      if(i!=max){
        int temp = x[max];
        x[max] = x[i];
        x[i] = temp;
      }
      display(x,n);
    }
}
void display(int x[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",x[i]);
    }
            printf("\n\n");
}
void main(){
    int x[] ={56,29,35,42,15,41,75,21};
    int n =8;
    sSort(x,n);
    display(x,n);
}