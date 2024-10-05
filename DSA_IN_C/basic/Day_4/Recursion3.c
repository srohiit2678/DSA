#include<stdio.h>
void show(int n){
if(n<=0)return;
printf("%d ",n);
show(n-2);
show(n-4);
}
void main(){
    show(10);
}