#include<stdio.h>
void show(int n){
    if(n<=0)return;
    printf("%d\n",n);
    show(n-2);
    show(n-3);
}
void main(){
    show(8);
}
// 8 6 4 2 1 3 1 5 3 1 2