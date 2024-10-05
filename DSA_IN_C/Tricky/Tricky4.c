#include<stdio.h>
// 10 to 1 without loop and - oprator
void show(int n){
if(n>=11)return;
show(n+1);
printf("%d ",n);
} 

void main(){
show(1);
}