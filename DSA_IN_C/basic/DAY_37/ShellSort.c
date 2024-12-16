#include<stdio.h>
#include<stdlib.h>
void cSort(int x[],int n);
void iSort(int x[],int n);
void display(int x[],int n);
void shellSort(int x[],int n){
    cSort(x,n);
    iSort(x,n);
    display(x,n);
}
void main(){
    int n=10;
    int x[] = {4,0,6,2,7,1,8,5,9,3}; 
    shellSort(x,n);

}

void cSort(int x[],int n){
    int g = n/2;
    while(g>1){
        for(int i=0;i<n-g;i++){
          if(x[i]<x[i+g]){
            int t = x[i];
            x[i] = x[i+g];
            x[i+g] = t;
          }  
        }
        g =g/2;   
}
}
void iSort(int x[],int n){
	int i,j,val;
	for(i=1;i<n;i++){
		val = x[i];
		for(j=i;j>0 && x[j-1] > val;j--){
			x[j] = x[j-1];
		}
		x[j] = val;
	}

}
void display(int x[],int n){
for(int i=0;i<n;i++){
	printf("%d ",x[i]);
}
}


