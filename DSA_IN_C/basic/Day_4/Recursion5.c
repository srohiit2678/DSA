#include<stdio.h>
void show(int n){
if(n<=0)return;
show(n-1);
printf("%d ",n);
show(n-3);
}
void main(){
 show(7);
}