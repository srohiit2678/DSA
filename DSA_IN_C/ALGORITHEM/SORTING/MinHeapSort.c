#include<stdio.h>
void display(int x[],int n);
void minHeap(int x[],int n,int i){
    int left = i*2+1;
    int right = i*2+2;
    int min = i;
    if(right<n){
        if(x[left]<x[right])min = left;
        else min = right;
        if(x[min]<x[i]){
            int temp = x[min];
            x[min] = x[i];
            x[i] = temp;
            minHeap(x,n,min);
        }
    }
}
int leastRoot(int x[],int n){
for(int i=n/2-1;i>=0;i--){
    minHeap(x,n,i);
}
}
void delete(int x[],int n){
    for(int i = n-1;i>=0;i--){
    int temp = x[0];
    x[0] = x[i];
    x[i] = temp;        
        minHeap(x,i,0);
    }
}
void display(int x[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",x[i]);
    }
}
void main(){
    int n=10;
    int x[]={-834 ,-7 ,12 ,13 ,34 ,66 ,67 ,87 ,90 ,683};
    leastRoot(x,n);
    delete(x,n);
    display(x,n);
}

/*

#include<stdio.h>
void display(int x[],int n);
void show(int x[],int n,int i){
    int left = i*2+1;
    int right = i*2+2;
    int min = i;
    if(right<n){
        if(x[left]<x[right])min = left;
        else min = right;
	}
	else if(left<n){
		min = left;
	}
    if(x[min]<x[i]){
        int temp = x[min];
        x[min] = x[i];
        x[i] = temp;
		display(x,n);
        show(x,n,min);
    }
}
void root(int x[],int n){
for(int i=n/2-1;i>=0;i--){
    show(x,n,i);
}
}
void delete(int x[],int n){
    for(int i=n-1;i>=1;i--){
    int temp = x[0];
    x[0] = x[i];
    x[i] = temp;        
	 display(x,n);     
	 show(x,i,0);
    }
}
void display(int x[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",x[i]);
    }
	printf("\n\n");
}
void main(){
    int n=11;
    int x[]={11,10,9,8,7,6,5,4,3,2,1};
    root(x,n);
    delete(x,n);
    display(x,n);
}

*/