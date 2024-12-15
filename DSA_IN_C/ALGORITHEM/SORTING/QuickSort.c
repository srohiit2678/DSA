#include<stdio.h>

void quickSort(int x[],int start,int n);
void dispaly(int x[],int n);

void main(){
    int n = 9;
    int x[] = {35,33,42,10,14,19,27,44,26,31};
    quickSort(x,0,n);
    dispaly(x,n+1);
}
void quickSort(int x[],int start,int n){
    if(start>n)return;
 int i,specific_postion;
 int pivot = x[n];
    for(i=start,specific_postion=start;i<n;i++){
        if(x[i]<pivot){
            int t = x[i];
            x[i] = x[specific_postion];
            x[specific_postion] = t;
            specific_postion++;
        }
    }
        x[n] = x[specific_postion];
        x[specific_postion] = pivot;
        quickSort(x,start,specific_postion-1);
        quickSort(x,specific_postion+1,n);
}
void dispaly(int x[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",x[i]);
    }
    printf("\n\n");
}
