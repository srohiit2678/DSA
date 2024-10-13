#include<stdio.h>

void bubbleSort(int x[],int size){
    int cheack=0;
 for(int i = 0;i<size-1;i++){
    cheack=0;
    for(int j=0;j<size-1-i;j++){
        if(x[j]>x[j+1]){
            int temp = x[j];
            x[j] = x[j+1];
            x[j+1] = temp;
            cheack++;
        }   
    }
    // if list is alredy sorted or sorted before complete execution of outter loop
    if(!cheack)return;
 }

}
void display(int x[],int size){
    printf("[");
    for(int i=0;i<size;i++){
        printf(" %d ",x[i]);
    }
    printf("]");
    printf("\n\n");
}

void main(){
    int x[] = {23,5,4,3,2,1,23,56,54};
    int n = sizeof(x)/sizeof(int);
    bubbleSort(x,n);
    display(x,n);
}