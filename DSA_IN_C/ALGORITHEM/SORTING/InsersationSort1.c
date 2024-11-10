#include<stdio.h>
void ISort(int x[],int n){
	int i,j,temp;
	for(i=n-1;i>=0;i--){
		temp = x[i];
		for(j=i;j<n-1;j++){
			if(temp>x[j+1]){
			    x[j] = x[j+1];
			}
			else break;
		}
		x[j] = temp;
	}
}

void display(int x[],int n){
for(int i=0;i<n;i++)
printf("%d ",x[i]);
printf("\n\n");
}

void main(){
	int x[] = {56,29,35,42,15,41,75,21};
	int n=8;
	ISort(x,n);
	display(x,n);
}