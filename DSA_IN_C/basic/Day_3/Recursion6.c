#include<stdio.h>
void show(int n){
    if(n<=0)return;
    show(n-1);
    printf("%d\n",n);
    show(n-2);
}
void main(){
    show(6);
}