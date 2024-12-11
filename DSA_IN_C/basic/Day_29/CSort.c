#include<stdio.h>
void display(int x[],int n);
void csort(int x[] , int n){
int i,t,g = 13/1.3;
while (g>0)
{ 
	for(i=0;i<n-g;i++){
		if(x[i]>x[i+g]){
			t = x[i];
			x[i] = x[i+g];
			x[i+g] = t;
		}
	}
	g = g/1.3;
}
}

void display(int x[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
		printf("\n");
}

void main(){
	int n = 13;
	int x[] ={5,0,6,2,7,1,8,4,9,3,12,11,5};
		display(x,n);
	csort(x,n);
		display(x,n);
}