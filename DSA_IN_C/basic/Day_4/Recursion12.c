#include<stdio.h>
int c=0;
void show(int n){
   
if(n<=0)return;
show(n-2);
show(n-3);
printf("%d ",n);
}
void main(){
  show(12);
}