#include<stdio.h>
void show(int n){
if(n<1)return;
show(n-1);
printf("%d ",n);
show(n-4);
}
void main(){
 show(9);
}