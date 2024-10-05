#include<stdio.h>
// 10 to 1 without loop
void show(int n){
if(n<=0)return;
printf("%d ",n);
show(n-1);
} 

void main(){
show(10);
}