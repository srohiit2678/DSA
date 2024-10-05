#include<stdio.h>
void show(int n){
if(n<1)return;
show(n-1);
show(n-3);
printf("%d ",n);
}
void main(){
  show(7);
}