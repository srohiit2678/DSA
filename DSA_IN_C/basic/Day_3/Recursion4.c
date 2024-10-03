#include<stdio.h>
void show(int n){
    if(n<=0)return;
    printf("%d\n",n);
    show(n-2);
    show(n-2);
}
void main(){
    show(7);
}
//7 5 3 1 1 3 1 1 5 3 1 1 3 1 1