#include<stdio.h>
void maxHeap(int x[],int n,int i){
    int left = 2*i+1;
    int right = 2*i+2;
    int max = i;
    if(right<n){
        if(x[left] > x[right]){
            max = left;
        } else{
            max = right;
        }
    }
    else if(left<n){    
        max = left; 
    }
    if(x[i]<x[max]){
        int temp = x[i];
        x[i] = x[max];
        x[max] = temp;
        maxHeap(x,n,max);
    }
}
void leastRoot(int x[],int n){
    for(int i=n/2-1;i>=0;i--){
        maxHeap(x,n,i);
    }
}
void deleteRoot(int x[],int n){
    for(int i=n-1;i>=1;i--){
        int temp = x[0];
        x[0] = x[i];
        x[i] = temp;
        maxHeap(x,i,0);
    }
}
void display(int x[],int n)
{
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
 printf("\n");
}
main(){
    int x[] = {1,2,3,4,5,6,72,3,4,543,652,46,24};
             // 56,29,35,42,15,41,75,21
    int n = 13;
    leastRoot(x,n);
    deleteRoot(x,n);
    display(x,n);
}