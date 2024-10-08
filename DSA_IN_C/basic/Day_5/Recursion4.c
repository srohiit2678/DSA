#include<stdio.h>
void show(int n){
if(n<=0)return;
printf("%d ",n);
show(n-1);
show(n-3);
} 

void main(){
show(7);
}