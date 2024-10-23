#include<stdio.h>
void show(int n){
if(n<1)return;

show1(n-1);
}
void show1(int n){
    printf("%d ",n);
    show(n-1);
}
void main(){
    show(10);
}