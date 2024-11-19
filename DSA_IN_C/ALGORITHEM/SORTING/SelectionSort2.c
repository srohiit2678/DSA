#include<stdio.h>

void sSort(int x[],int n)
{
    for(int i=n-1;i>=1;i--)
    {
        int max = i;
        for(int j = i-1;j>=0;j--)
        {
            if(x[max]<x[j])
            max = j;
        }
        if(i!=max)
			{
			int t = x[max];
			x[max]  = x[i];
			x[i] = t;
			}
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
	int x[] = {56,29,35,42,15,41,75,21};
	int n=8;
	sSort(x,n);
	display(x,n);
}