#include<stdio.h>
int a;
int b;
void pattern(int n){

	if(a>n)return;
	printf("%d ",b);
	if(b==n){
		printf("\n");
		b=a;
		a++;
	}
	b++;
	pattern(n);
}

void main(){
	int n=5;
	 a=1;
	 b=1;
 pattern(n);
}