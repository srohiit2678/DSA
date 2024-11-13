#include<stdio.h>
#include<stdbool.h>
void csort(int x[] , int n)
{
    int y[n];
    int max = x[0];
    int i;
    for(i=1;i<n;i++){if(max<x[i])max=x[i];}
    max++;
    int a[max];
	for(i=0;i<max;i++)a[i]=0;
    for(i = 0;i<n;i++)a[x[i]]++;
    for(i=1;i<max;i++)a[i]+=a[i-1];
    for(i=n-1;i>=0;i--)y[a[x[i]]-=1]=x[i];
    for(i=0;i<n;i++)x[i] = y[i];
}

void display(int x[],int n)
{
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
 printf("\n");
}

void main(){
	int x[] = {56,29,35,42,15,41,75,21};
	int n=8;
	csort(x,n);
	display(x,n);
}