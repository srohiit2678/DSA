#include<stdio.h>

void show(int n){

if(n<=0)return;

show(n/2);

printf("%d ",n%2);

}

void main(){

    show(12);

}