#include<stdio.h>
void show(int n){
if(n<=0)return;
show(n-2);
printf("%d ",n);
show(n-4);
}
void main(){
 show(10);
}