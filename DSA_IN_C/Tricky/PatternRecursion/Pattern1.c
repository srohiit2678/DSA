#include<stdio.h>
int a=1;
int b=1;
void pattern(int n){

	if(a>=n)return;
	printf("%d ",b);
	if(b==n){
		printf("\n");
		b=0;
		a++;
	}
	b++;
	pattern(n);
}

void main(){
	int n=5;
 pattern(n);
}