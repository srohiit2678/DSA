#include<stdio.h>
// for Debuging 
void debug(int left[],int right[],int L,int R);

// devide the given array until it reach up to single element
void mergeArray(int left[],int right[],int x[],int L,int R);
void divide(int x[],int size){
    if(size<=1)return;
    int L = size/2;
    int R = size-L;
    int left[L];
    int right[R];
    int i;
    for(i=0;i<L;i++){
        left[i] = x[i];
    }
    for(i=0;i<R;i++){
        right[i] = x[i+L];
    }
     // debug(left,right,L,R);
     divide(left,L);    
     divide(right,R);
    // debug(left,right,L,R);

    mergeArray(left,right,x,L,R);
     
}

void mergeArray(int left[],int right[],int x[],int L,int R){
    int i,j,k;
    for(i=0,j=0,k=0;i<L &&j<R;){
        if(left[i]<right[j]){
            x[k++] = left[i++];
        }
        else{
        x[k++] = right[j++];
        }
    }
    while(i<L){
        x[k++] = left[i++];
    }
    while (j<R)
    {
    x[k++] = right[j++];
    }
    
}

void debug(int left[],int right[],int L,int R){
    for(int i=0;i<L;i++){
        printf("%d ",left[i]);
    }
    printf(" <----> ");
    for(int i=0;i<R;i++){
        printf(" %d ",right[i]);
}
printf("\n");

}

void sort(int x[],int size){
    divide(x, size);
}

display(int x[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",x[i]);
    }
}
void main(){
    int n = 8;
    int x[] = {56,29,35,42,15,41,75,21};
    sort(x, n);
    display(x, n);
}