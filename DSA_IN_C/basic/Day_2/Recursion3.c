#include<stdio.h>
// 1 to 10 whithout + 
void show(int n){
    if(n==0)return;
    show(n-1);
    printf("%d\n",n);
}
void main(){
    show(10);
}
