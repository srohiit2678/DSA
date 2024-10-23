#include<stdio.h>
  void sSort(int x[],int n);
  void display(int x[],int n);
  void sSort(int x[],int n)
  {
    int i,j,min;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(x[min]>x[j]){
                min = j;
            }
        }
        if(i!=min){
            int temp = x[min];
            x[min] = x[i];
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