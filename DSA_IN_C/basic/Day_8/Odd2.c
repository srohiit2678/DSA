#include<stdio.h>
void show(int n){
if(n<=0) return;
show(n-1);
if(n%2==1){
    printf("%d\n",n);
}
}
void main(){
    show(10);
}