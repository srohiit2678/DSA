#include<stdio.h>
int a;
int b;
void pattern(int n){

	if(a<=0)return;
	printf("%d ",b);
	if(b==a){
		printf("\n");
		b=0;
		a--;
	}
	b++;
	pattern(n);
}

void main(){
	int n=5;
	 a=n;
	 b=1;
 pattern(n);
}