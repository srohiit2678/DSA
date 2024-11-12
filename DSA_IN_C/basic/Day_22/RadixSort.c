#include<stdio.h>
void Radix(int x[],int n);
void RSort(int x[],int n,int div){
    int a[10] = {0};
    int y[n];
    int i;
    for(i=0;i<n;i++){
        a[x[i]/div%10]++;
    }
    for(i=1;i<10;i++){
        a[i]+=a[i-1];
    }
    for(i=n-1;i>=0;i--){
        y[a[x[i]/div%10]-=1]=x[i];
    }
    for(i=0;i<n;i++){
        x[i] = y[i];
    }

}

void Radix(int x[],int n){
    int min = x[0];
    int max = x[0];
    for(int i=1;i<n;i++){
        if(min>x[i])min=x[i];
    }

    for(int i=0;i<n;i++){
        x[i] = x[i]-min;
    }

    for(int i=1;i<n;i++){
        if(max<x[i])max=x[i];
    }

    for(int i = 1;i<=max;i = i*10){
        RSort(x,n,i);
    }
    
    for(int i=0;i<n;i++){
        x[i] = x[i]+min;
    }
} 
void display(int x[],int n)
{
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
 printf("\n");
}

void main(){
    int x[] = {329,457,657,-839,436,720,355}; 
    int n = 7;
    Radix(x,n);
    display(x,n);
    
}