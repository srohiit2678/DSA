#include<stdio.h>

display(int x[],int size);
void sSort(int x[] , int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(x[min]>x[j]){
                min = j;
            }
        }
        if(i!=min){
            int temp = x[min];
            x[min] = x[i];
            x[i] = temp;
        }
    }
}
display(int x[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",x[i]);
    }
}
void main(){
    int n = 8;
    int x[] = {56,29,35,42,15,41,75,21};
    sSort(x, n);
    display(x, n);
}