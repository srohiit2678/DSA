#include<stdio.h>
// 1 to 10 without loop
void show(int n){
if(n>=11)return;
printf("%d ",n);
show(n+1);
} 

void main(){
show(1);
}