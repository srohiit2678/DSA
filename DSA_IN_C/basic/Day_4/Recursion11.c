#include<stdio.h>
void show(int n){
if(n<1)return;
show(n-2);
show(n-4);
printf("%d ",n);
}
void main(){
  show(10);
}