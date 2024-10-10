#include<stdio.h>
void show(int n){
if(n<=0) return;
if(n%2==1){
    printf("%d\n",n);
}
show(n-1);
}
void main(){
    show(10);
}