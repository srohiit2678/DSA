#include<stdio.h>
void show(int n){
if(n<1)return;
printf("%d ",n);
show(n-2);
show(n-3);
}
void main(){
 show(12);
}